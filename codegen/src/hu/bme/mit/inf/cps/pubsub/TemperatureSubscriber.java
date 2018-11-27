package hu.bme.mit.inf.cps.pubsub;

import com.rti.dds.domain.DomainParticipant;
import com.rti.dds.infrastructure.StatusKind;
import com.rti.dds.subscription.Subscriber;

import hu.bme.mit.inf.cps._interface.Weather.TemperatureDataReader;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureTypeSupport;

public class TemperatureSubscriber extends rtiDDSpubsubObject {
    Subscriber subscriber = null;
    TemperatureDataReader reader = null;

	public TemperatureSubscriber(int domainId, TemperatureListener listener) {
		super(domainId);
		
		subscriber = participant.create_subscriber(
            DomainParticipant.SUBSCRIBER_QOS_DEFAULT, null /* listener */,
            StatusKind.STATUS_MASK_NONE);
        if (subscriber == null) {
            System.err.println("create_subscriber error\n");
            return;
        }     

        String typeName = TemperatureTypeSupport.get_type_name(); 
        TemperatureTypeSupport.register_type(participant, typeName);

        topic = participant.create_topic(
            "Example _c_interface_Weather_Temperature",
            typeName, DomainParticipant.TOPIC_QOS_DEFAULT,
            null /* listener */, StatusKind.STATUS_MASK_NONE);
        if (topic == null) {
            System.err.println("create_topic error\n");
            return;
        }                     
        
        reader = (TemperatureDataReader)
        subscriber.create_datareader(
            topic, Subscriber.DATAREADER_QOS_DEFAULT, listener,
            StatusKind.STATUS_MASK_ALL);
        if (reader == null) {
            System.err.println("create_datareader error\n");
            return;
        }                         
	}
}
