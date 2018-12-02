

import org.influxdb.BatchOptions;
import org.influxdb.InfluxDB;
import org.influxdb.InfluxDBFactory;
import org.influxdb.dto.Point;

import java.util.concurrent.TimeUnit;

abstract class InfluxConnector {

    static InfluxDB getDatabaseConnection() {
        return databaseConnection;
    }

    private static InfluxDB databaseConnection;

    InfluxConnector() {

        String influxURL = "http://grafana.wlap.eu:8086";
        String influxUser = "CPSin";
        String influxPass = "LaborImage";
        databaseConnection = InfluxDBFactory.connect(influxURL, influxUser, influxPass);
        String influxDBname = "CPS";
        databaseConnection.setDatabase(influxDBname);
        databaseConnection.enableBatch(BatchOptions.DEFAULTS);

    }



// public void addData(String name, String timestamp, double accX, double accY, double accZ) {
//
// databaseConnection.write(
// Point.measurement("gyro")
//
//            .time( Long.valueOf(timestamp), TimeUnit.MILLISECONDS)
//            .tag("name", name)
//            .addField("accX", accX)
//            .addField("accY", accY)
//            .addField("accZ", accZ)
//            .build());
//
//    System.out.println("sent");
//    }
//

}