package hu.bme.mit.inf.weather.predictor;


import java.util.concurrent.TimeUnit;

import org.influxdb.dto.Point;

import hu.bme.mit.inf.weather.weather.AirportWeather.AirportWeatherData;

public class MetarInfluxConnector extends InfluxConnector {


    MetarInfluxConnector() {
        super();
    }

    void addData(AirportWeatherData metar) {

        getDatabaseConnection().write(
                Point.measurement("metar2")

                        .time(Long.valueOf(metar.metadata.timestamp), TimeUnit.MILLISECONDS)
                        .addField("locationName", metar.metadata.location.name)
                        .addField("temperature", metar.Temperature)
                        .addField("dewpoint", metar.DewPoint)
                        .addField("windDirection ", metar.WindDirection)
                        .addField("windSpeed", metar.WindSpeed)
                        .addField("gust", metar.WindGust)
                        .addField("windVarFrom", metar.WindDirChange)
                        .addField("windVarto", metar.WindDirChange1)
                        .addField("airPressure", metar.Pressure)
                        .build());

        System.out.println("sent data on " + metar.metadata.timestamp);
    }


}

