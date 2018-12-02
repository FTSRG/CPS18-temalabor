import org.influxdb.dto.Point;

import java.util.concurrent.TimeUnit;

public class AccInfluxConnector  extends InfluxConnector{

    AccInfluxConnector() {
            super();
        }


    public void addData(String name, String timestamp, double accX, double accY, double accZ) {

        getDatabaseConnection().write(
                Point.measurement("gyro")

                        .time( Long.valueOf(timestamp), TimeUnit.MILLISECONDS)
                        .tag("name", name)
                        .addField("accX", accX)
                        .addField("accY", accY)
                        .addField("accZ", accZ)
                        .build());

        System.out.println("sent");
    }

    }
