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

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

import hu.bme.mit.inf.weather.weather.AirportWeather.AirportWeatherData;
import javafx.util.Pair;

public class Main {
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

                //set temperature and dewpoint
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

}
