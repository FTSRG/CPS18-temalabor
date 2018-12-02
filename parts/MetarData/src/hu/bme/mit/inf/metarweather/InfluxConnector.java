package hu.bme.mit.inf.metarweather;
import org.influxdb.BatchOptions;
import org.influxdb.InfluxDB;
import org.influxdb.InfluxDBFactory;

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
}