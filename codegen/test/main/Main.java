package main;

import hu.bme.mit.inf.cps._interface.Weather.Temperature;
import hu.bme.mit.inf.cps.pubsub.TemperaturePublisher;
import hu.bme.mit.inf.cps.pubsub.TemperatureSubscriber;

public class Main {
	static TemperaturePublisher publisher = new TemperaturePublisher(0);
	static TemperatureSubscriber subscriber = new TemperatureSubscriber(0, new MyListener());

	public static void main(String[] args) {
		Temperature temp = new Temperature();
		
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		publisher.publish(temp);

	}

}
