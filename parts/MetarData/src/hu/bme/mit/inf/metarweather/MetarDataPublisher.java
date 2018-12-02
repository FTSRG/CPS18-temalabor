package hu.bme.mit.inf.metarweather;


import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.sql.Timestamp;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

import com.rti.dds.domain.DomainParticipant;
import com.rti.dds.domain.DomainParticipantFactory;
import com.rti.dds.infrastructure.InstanceHandle_t;
import com.rti.dds.infrastructure.StatusKind;
import com.rti.dds.publication.Publisher;
import com.rti.dds.sqlfilter.ParseException;
import com.rti.dds.topic.Topic;

import hu.bme.mit.inf.weather.weather.AirportWeather.AirportWeatherData;
import hu.bme.mit.inf.weather.weather.AirportWeather.AirportWeatherDataDataWriter;
import hu.bme.mit.inf.weather.weather.AirportWeather.AirportWeatherDataTypeSupport;
import javafx.util.Pair;

public class MetarDataPublisher {
	public static List<AirportWeatherData> metars = new ArrayList<AirportWeatherData>();
	
	public static void getMetar(){
        List<String> stations = Arrays.asList("LHBC", "LHBP", "LHKE", "LHPA", "LHPP", "LHPR", "LHSM", "LHSN", "LHUD", "LHTA", "LHDC");


        try {

            BufferedWriter writer = new BufferedWriter(new FileWriter("metar.csv"));

            for (String station: stations) {
                String url = "https://www.aviationweather.gov/metar/data?ids=" + station + "&format=raw&hours=12&taf=off&layout=on";
                Document document = Jsoup
                        .connect(url)
                        .followRedirects(true)
                        .post();

                Elements content = document.select("code");

                for (Element line : content)
                    if (content.text().length() > 2) {
                        writer.write(line.text() + "\n");
                    }
            }

            writer.close();



        } catch (IOException e) {
            e.printStackTrace();
        }

    }
	
	public static void readMetar() throws FileNotFoundException {
		
		ArrayList<Pair<String,String>> cityNames = new ArrayList<Pair<String,String>>();
		
		File file1 = new File("citys.txt");
        BufferedReader br1 = new BufferedReader(new FileReader(file1));
        String line1;
        try {
			while ((line1 = br1.readLine()) !=  null){
				String[] dataLine = line1.split(":");
				cityNames.add(new Pair<String, String>(dataLine[0], dataLine[1]));
			}
		} catch (IOException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}	

        File file2 = new File("metar.csv");

        BufferedReader br2 = new BufferedReader(new FileReader(file2));

        String line2;
        try {
            while ((line2 = br2.readLine()) !=  null){
                String[] dataLine = line2.split(" ");
                int iter = 0;

                //Create new Metar
                AirportWeatherData met = new AirportWeatherData();

                //set Location Name
                for(int i = 0; i < cityNames.size(); ++i){
                	if(cityNames.get(i).getKey().equals(dataLine[iter])) {
                		met.metadata.location.name = cityNames.get(i).getValue();
                		met.metadata.location.latitude = 0;
                		met.metadata.location.longitude = 0;
                	}
                }
                
                iter++;
                

                //set Date 
                int day, hour, minute;
                day = Integer.parseInt(dataLine[iter].substring(0, 2));
                hour = Integer.parseInt(dataLine[iter].substring(2, 4));
                minute = Integer.parseInt(dataLine[iter].substring(4, 6));

                Date date = new Date();
                Timestamp timestamp = new Timestamp(date.getYear(), date.getMonth(), day, hour, minute, 0, 0);
                
                
                
                met.metadata.timestamp = timestamp.getTime(); 
                iter++;

                if(dataLine[iter].equals("AUTO")){
                    iter++;
                }

                //set Wind direction and Speed
                if(dataLine[iter].length() == 7 && dataLine[iter].substring(5,7).equals("KT")){
                    if(!dataLine[iter].substring(0,3).equals("VRB")){
                        met.WindDirection = Integer.parseInt(dataLine[iter].substring(0,3));
                    } else {
                        met.WindDirection = -1;
                    }

                    met.WindSpeed = Integer.parseInt(dataLine[iter].substring(3,5));
                    iter++;
                }else if(dataLine[iter].length() == 10){
                    met.WindDirection = Integer.parseInt(dataLine[iter].substring(0,3));
                    met.WindSpeed = Integer.parseInt(dataLine[iter].substring(3,5));
                    met.WindGust = Integer.parseInt(dataLine[iter].substring(6,8));
                    iter++;
                }

                //set wind variance
                if(dataLine[iter].substring(3,4).equals("V")){
                    met.WindDirChange = Integer.parseInt(dataLine[iter].substring(0,3));
                    met.WindDirChange1 = Integer.parseInt(dataLine[iter].substring(4,7));
                    iter++;
                }

                //set Line of Sight
                if(dataLine[iter].equals("//////") || dataLine[iter].equals("////")){
                    iter++;
                }

                if(dataLine[iter].equals("CAVOK")){
                    iter++;
                }else if(dataLine[iter].equals("//////") || dataLine[iter].equals("////")){
                    iter++;
                }else {
                    iter++;
                }

                //get temperature and dewpoint
                if(dataLine[iter].equals("MIBCFZFG")){ iter++; }
                
                if(dataLine[iter].contains("///")){
                    iter++;
                }
                
                if(dataLine[iter].contains("-SN")){
                    iter++;
                }
                
                if(dataLine[iter].contains("-SN")){
                    iter++;
                }
                
                if(dataLine[iter].contains("BR")){
                    iter++;
                }
                
                if(dataLine[iter].contains("HZ")){
                    iter++;
                }
                
                if(dataLine[iter].contains("MIFG")){
                    iter++;
                }
                
                if(dataLine[iter].contains("NSC")){
                    iter++;
                }
                
                
                if(dataLine[iter].contains("NCD")){
                    iter++;
                }
                
                if(dataLine[iter].contains("FEW")){
                    iter++;
                }
                
                if(dataLine[iter].contains("SCT")) {
                	iter++;
                }
                
                if(dataLine[iter].contains("SCT")) {
                	iter++;
                }
                
                
                
                while(dataLine[iter].contains("BKN")) iter++;
                
                if(dataLine[iter].contains("OVC")) {
                	iter++;
                }


                if(dataLine[iter].contains("/")){
                    String[] temp = dataLine[iter].split("/");
                    if(temp[0].substring(0,1).equals("m") || temp[0].substring(0,1).equals("M")){
                        met.Temperature = Integer.parseInt(temp[0].substring(1,3)) * -1;
                    } else {
                        met.Temperature = Integer.parseInt(temp[0]);
                    }

                    if(temp[1].substring(0,1).equals("m") || temp[1].substring(0,1).equals("M")){
                        met.DewPoint = Integer.parseInt(temp[1].substring(1,3)) * -1;
                    } else {
                        met.DewPoint = Integer.parseInt(temp[1]);
                    }
                    iter++;
                } else if(dataLine[iter].substring(0,1).equals("m") || dataLine[iter].substring(0,1).equals("M")){
                    met.Temperature = Integer.parseInt(dataLine[iter].substring(1,3)) * -1;
                    iter++;
                } else {
                    met.Temperature = Integer.parseInt(dataLine[iter]);
                    iter++;
                }

                //set Pressure
                met.Pressure = Integer.parseInt(dataLine[iter].substring(1,5));
                metars.add(met);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
	
	public static void main(String[] args) {
		// --- Get domain ID --- //
        int domainId = 0;
        if (args.length >= 1) {
            domainId = Integer.valueOf(args[0]).intValue();
        }

        // -- Get max loop count; 0 means infinite loop --- //
        int sampleCount = 0;
        if (args.length >= 2) {
            sampleCount = Integer.valueOf(args[1]).intValue();
        }

        /* Uncomment this to turn on additional logging
        Logger.get_instance().set_verbosity_by_category(
            LogCategory.NDDS_CONFIG_LOG_CATEGORY_API,
            LogVerbosity.NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
        */

        // --- Run --- //
        publisherMain(domainId, sampleCount);
    }

    // -----------------------------------------------------------------------
    // Private Methods
    // -----------------------------------------------------------------------

    // --- Constructors: -----------------------------------------------------
/*
    private MetarPublisher() {
        super();
    }*/

    // -----------------------------------------------------------------------

    private static void publisherMain(int domainId, int sampleCount) {
    	
    	Timer timer = new Timer();
        timer.schedule(new TimerTask() {
               @Override
               public void run() {  

	        DomainParticipant participant = null;
	        Publisher publisher = null;
	        Topic topic = null;
	        AirportWeatherDataDataWriter writer = null;
	        
	        
	
	        try {

	            // --- Create participant --- //
	
	            /* To customize participant QoS, use
	            the configuration file
	            USER_QOS_PROFILES.xml */
	
	            participant = DomainParticipantFactory.TheParticipantFactory.
	            create_participant(
	                domainId, DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
	                null /* listener */, StatusKind.STATUS_MASK_NONE);
	            if (participant == null) {
	                System.err.println("create_participant error\n");
	                return;
	            }        
	
	            // --- Create publisher --- //
	
	            /* To customize publisher QoS, use
	            the configuration file USER_QOS_PROFILES.xml */
	
	            publisher = participant.create_publisher(
	                DomainParticipant.PUBLISHER_QOS_DEFAULT, null /* listener */,
	                StatusKind.STATUS_MASK_NONE);
	            if (publisher == null) {
	                System.err.println("create_publisher error\n");
	                return;
	            }                   
	
	            // --- Create topic --- //
	
	            /* Register type before creating topic */
	            String typeName = AirportWeatherDataTypeSupport.get_type_name();
	            AirportWeatherDataTypeSupport.register_type(participant, typeName);
	
	            /* To customize topic QoS, use
	            the configuration file USER_QOS_PROFILES.xml */
	
	            topic = participant.create_topic(
	                "Example Metar",
	                typeName, DomainParticipant.TOPIC_QOS_DEFAULT,
	                null /* listener */, StatusKind.STATUS_MASK_NONE);
	            if (topic == null) {
	                System.err.println("create_topic error\n");
	                return;
	            }           
	
	            // --- Create writer --- //
	
	            /* To customize data writer QoS, use
	            the configuration file USER_QOS_PROFILES.xml */
	
	            writer = (AirportWeatherDataDataWriter)
	            publisher.create_datawriter(
	                topic, Publisher.DATAWRITER_QOS_DEFAULT,
	                null /* listener */, StatusKind.STATUS_MASK_NONE);
	            if (writer == null) {
	                System.err.println("create_datawriter error\n");
	                return;
	            }           
	
	            // --- Write --- //
	
	            /* Create data sample for writing */
	            AirportWeatherData instance = new AirportWeatherData();
	
	            InstanceHandle_t instance_handle = InstanceHandle_t.HANDLE_NIL;
	            /* For a data type that has a key, if the same instance is going to be
	            written multiple times, initialize the key here
	            and register the keyed instance prior to writing */
	            //instance_handle = writer.register_instance(instance);

	                  
	            getMetar();
	            try {
					readMetar();
				} catch (FileNotFoundException e) {
					e.printStackTrace();
				}
	            
	            final long sendPeriodMillis = 1 * 1000; // 1 seconds
	
	            for (int count = 0;
	            (sampleCount == 0) || (count < sampleCount); ++count) {
	                System.out.println("Writing Metar, count " + count);
	
	                if(count >= metars.size()) {
	                	metars.clear();
	                	break;
	                } 
	                instance.metadata.location.name = metars.get(count).metadata.location.name;
	                instance.metadata.timestamp = metars.get(count).metadata.timestamp;
	                instance.WindDirection = metars.get(count).WindDirection;
	                instance.WindSpeed = metars.get(count).WindSpeed;
	                instance.Temperature = metars.get(count).Temperature;
	                instance.WindGust = metars.get(count).WindGust;
	                instance.WindDirChange = metars.get(count).WindDirChange;
	                instance.WindDirChange1 = metars.get(count).WindDirChange1;
	                instance.DewPoint = metars.get(count).DewPoint;
	                instance.Pressure = metars.get(count).Pressure;
	                
	                
	                MetarInfluxConnector connection = new MetarInfluxConnector();
	                connection.addData(metars.get(count));
					
	
	                /* Write data */
	                writer.write(instance, instance_handle);
	                try {
	                    Thread.sleep(sendPeriodMillis);
	                } catch (InterruptedException ix) {
	                    System.err.println("INTERRUPTED");
	                    break;
	                }
	                
	            }
	                   
	        
	            
	            //writer.unregister_instance(instance, instance_handle);
	
	        } finally {
	
	            // --- Shutdown --- //
	
	            if(participant != null) {
	                participant.delete_contained_entities();
	
	                DomainParticipantFactory.TheParticipantFactory.
	                delete_participant(participant);
	            }
	            /* RTI Data Distribution Service provides finalize_instance()
	            method for people who want to release memory used by the
	            participant factory singleton. Uncomment the following block of
	            code for clean destruction of the participant factory
	            singleton. */
	            //DomainParticipantFactory.finalize_instance();
	        }
      
             }
       }, 0, 1000 * 60 * 60 * 12);       
    }
	
}
