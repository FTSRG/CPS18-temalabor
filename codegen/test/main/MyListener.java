package main;

import hu.bme.mit.inf.cps._interface.Weather.Temperature;
import hu.bme.mit.inf.cps.pubsub.TemperatureListener;

public class MyListener extends TemperatureListener{

	@Override
	public void onValidDataAvailable(Temperature data) {
		System.out.println("VALID DATA");
		
	}

	@Override
	public void onInvalidData() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void onNoDataAvailable() {
		// TODO Auto-generated method stub
		
	}

}
