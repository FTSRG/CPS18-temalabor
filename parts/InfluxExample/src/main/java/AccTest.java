import java.time.Instant;

import org.influxdb.annotation.Column;
import org.influxdb.annotation.Measurement;

@Measurement(name = "gyro")
public class AccTest {
 
    @Column(name = "time")
     Instant time;
 
    @Column(name = "name")
     String name;
 
    @Column(name = "accX")
     String accX;
 
    @Column(name = "accY")
     String accY;
 
    @Column(name = "accZ")
     String accZ;
}