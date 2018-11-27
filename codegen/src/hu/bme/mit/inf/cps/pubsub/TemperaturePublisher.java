package hu.bme.mit.inf.cps.pubsub;

import com.rti.dds.domain.DomainParticipant;
import com.rti.dds.infrastructure.InstanceHandle_t;
import com.rti.dds.infrastructure.StatusKind;
import com.rti.dds.publication.Publisher;

import hu.bme.mit.inf.cps._interface.Weather.Temperature;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureDataWriter;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureTypeSupport;

public class TemperaturePublisher extends rtiDDSpubsubObject {
    private Publisher publisher = null;
    private TemperatureDataWriter writer = null;

	public TemperaturePublisher(int domainId) {
		super(domainId);
		
        publisher = participant.create_publisher(
            DomainParticipant.PUBLISHER_QOS_DEFAULT, null /* listener */,
            StatusKind.STATUS_MASK_NONE);
        if (publisher == null) {
            System.err.println("create_publisher error\n");
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
        
        writer = (TemperatureDataWriter)
        publisher.create_datawriter(
            topic, Publisher.DATAWRITER_QOS_DEFAULT,
            null /* listener */, StatusKind.STATUS_MASK_NONE);
        if (writer == null) {
            System.err.println("create_datawriter error\n");
            return;
        }           
	}
	public void publish(Temperature data) {
		InstanceHandle_t instance_handle = InstanceHandle_t.HANDLE_NIL;
		writer.write(data, instance_handle);
	}

}
