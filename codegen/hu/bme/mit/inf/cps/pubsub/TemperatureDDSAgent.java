package hu.bme.mit.inf.cps.pubsub;

import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.Arrays;

import com.rti.dds.domain.*;
import com.rti.dds.infrastructure.*;
import com.rti.dds.publication.*;
import com.rti.dds.subscription.DataReader;
import com.rti.dds.subscription.DataReaderAdapter;
import com.rti.dds.subscription.InstanceStateKind;
import com.rti.dds.subscription.SampleInfo;
import com.rti.dds.subscription.SampleInfoSeq;
import com.rti.dds.subscription.SampleStateKind;
import com.rti.dds.subscription.Subscriber;
import com.rti.dds.subscription.ViewStateKind;
import com.rti.dds.topic.*;
import com.rti.ndds.config.*;

import hu.bme.mit.inf.cps._interface.Weather.TemperatureDataReader;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureForecastDataWriter;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureSeq;

public class TemperatureDDSAgent {
	
	private int domainId = 0; //TODO
	private DomainParticipant participant = null;
	private Publisher publisher = null;
	private Subscriber subscriber = null;
	private Topic topic = null;
	private TemperatureForecastDataWriter writer = null;
	
	public TemperatureDDSAgent(int domainId) {
		this.domainId=domainId;
		initializeParticipant();
	}
	public TemperatureDDSAgent() {
		this.domainId=0;
		initializeParticipant();
	}
	
	private void initializeParticipant() {
        participant = DomainParticipantFactory.TheParticipantFactory.
        create_participant(
            domainId, DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
            null /* listener */, StatusKind.STATUS_MASK_NONE);
        if (participant == null) {
            System.err.println("create_participant error\n");
            return;
        }
	}
	
	private void initializePublisher() {
		publisher = participant.create_publisher(
                DomainParticipant.PUBLISHER_QOS_DEFAULT, null /* listener */,
                StatusKind.STATUS_MASK_NONE);
            if (publisher == null) {
                System.err.println("create_publisher error\n");
                return;
            }               
	}
	private void initializeSubscriber() {
		subscriber = participant.create_subscriber(
                DomainParticipant.SUBSCRIBER_QOS_DEFAULT, null /* listener */,
                StatusKind.STATUS_MASK_NONE);
            if (subscriber == null) {
                System.err.println("create_subscriber error\n");
                return;
            }     
	}
	
	// -----------------------------------------------------------------------

   
    @Override
    protected void finalize() throws Throwable {
    	if(participant != null) {
            participant.delete_contained_entities();

            DomainParticipantFactory.TheParticipantFactory.
            delete_participant(participant);
        }
    	super.finalize();
    }
    private static class TemperatureListener extends DataReaderAdapter {

        TemperatureSeq _dataSeq = new TemperatureSeq();
        SampleInfoSeq _infoSeq = new SampleInfoSeq();

        public void on_data_available(DataReader reader) {
            TemperatureDataReader TemperatureReader =
            (TemperatureDataReader)reader;

            try {
                TemperatureReader.take(
                    _dataSeq, _infoSeq,
                    ResourceLimitsQosPolicy.LENGTH_UNLIMITED,
                    SampleStateKind.ANY_SAMPLE_STATE,
                    ViewStateKind.ANY_VIEW_STATE,
                    InstanceStateKind.ANY_INSTANCE_STATE);

                for(int i = 0; i < _dataSeq.size(); ++i) {
                    SampleInfo info = (SampleInfo)_infoSeq.get(i);

                    if (info.valid_data) {
                    	//TODO
                    }
                }
            } catch (RETCODE_NO_DATA noData) {
                //TODO No data to process
            } finally {
                TemperatureReader.return_loan(_dataSeq, _infoSeq);
            }
        }
    }
}


