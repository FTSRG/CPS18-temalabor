import org.influxdb.dto.Point;

import java.util.concurrent.TimeUnit;

public class TemperatureInfluxConnector  extends InfluxConnector{

    TemperatureInfluxConnector() {
            super();
        }


    public void addData(String timestamp, String locationName, String sensorName, double value, boolean isValid) {

        getDatabaseConnection().write(
                Point.measurement("temp")

                        .time( Long.valueOf(timestamp), TimeUnit.MILLISECONDS)
                        .tag("name", sensorName)
                        .addField("locName", locationName)
                        .addField("temp", value)
                        .addField("isValid", isValid)
                        .build());

    }

    }
//
//    LocationType loc = new LocationType();
//                loc.locationName = "PiDHT22";
//                        SensorMetaType sensorMeta = new SensorMetaType();
//                        sensorMeta.sensorName = "DHT22";
//                        sensorMeta.updateFreq = 4000;
//
//                        data.timestamp = String.valueOf(System.currentTimeMillis());
//                        data.location = loc;
//                        data.sensorMeta = sensorMeta;
//                        instance.timestamp = data.timestamp;
//                        instance.sensorMeta = data.sensorMeta;
//                        instance.location = data.location;
//
//                        instance.value = dht22.getTemp();
