import org.zeroturnaround.exec.ProcessExecutor;

import java.io.IOException;
import java.util.StringTokenizer;
import java.util.concurrent.TimeoutException;

public class DHT22 {
    private static ProcessExecutor pe= new ProcessExecutor();

    public double getTemp() throws InterruptedException, TimeoutException, IOException {
        String output = pe.command("./readDHT22fromGPIO16.py")
                .readOutput(true).execute()
                .outputUTF8();
        System.out.println(output);
        StringTokenizer stringTokenizer = new StringTokenizer(output,";");
        double temp= Double.valueOf(stringTokenizer.nextToken());
        double hum= Double.valueOf(stringTokenizer.nextToken());

        return temp;
    }

}