import org.zeroturnaround.exec.ProcessExecutor;

import java.io.IOException;
import java.util.StringTokenizer;
import java.util.concurrent.TimeoutException;

public class DHT22 {
    private static ProcessExecutor pe= new ProcessExecutor();

    private double temp;
    private double hum;

    public void getData() throws InterruptedException, TimeoutException, IOException {
        String output = pe.command("/home/pi/readDHT22fromGPIO21.py")
                .readOutput(true).execute()
                .outputUTF8();
        System.out.println(output);
        StringTokenizer stringTokenizer = new StringTokenizer(output,";");
        temp= Double.valueOf(stringTokenizer.nextToken());
        hum= Double.valueOf(stringTokenizer.nextToken());
    }

    public double getTemp() {
        return temp;
    }

    public double getHum() {
        return hum;
    }
}