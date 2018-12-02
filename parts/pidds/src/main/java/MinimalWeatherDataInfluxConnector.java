import org.influxdb.dto.Point;
import weather.MinimalWeather.MinimalWeatherData;

import java.util.concurrent.TimeUnit;

public class MinimalWeatherDataInfluxConnector extends InfluxConnector{

    MinimalWeatherDataInfluxConnector() {
            super();
        }


    public void addData(MinimalWeatherData mwd) {

        getDatabaseConnection().write(
                Point.measurement("MinimalWeatherData")

                        .time( Long.valueOf(mwd.metadata.timestamp), TimeUnit.MILLISECONDS)
                        .tag("name", mwd.metadata.source.name)
                        .addField("locName", mwd.metadata.location.name)
                        .addField("locLatitude", mwd.metadata.location.latitude)
                        .addField("locLongitude", mwd.metadata.location.longitude)
<<<<<<< HEAD
                        .addField("Humidity", mwd.Humidity)
                        .addField("temperature", mwd.Temperature)
=======
                        .addField("locLongitude", mwd.Humidity)
                        .addField("locLongitude", mwd.Temperature)
>>>>>>> origin/SensorDataCollection
//                        .addField("isValid", isValid)
                        .build());

    }

    }