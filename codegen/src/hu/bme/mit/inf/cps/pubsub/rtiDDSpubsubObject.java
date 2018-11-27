package hu.bme.mit.inf.cps.pubsub;

import com.rti.dds.domain.DomainParticipant;
import com.rti.dds.domain.DomainParticipantFactory;
import com.rti.dds.infrastructure.StatusKind;
import com.rti.dds.topic.Topic;

public class rtiDDSpubsubObject {
	protected int domainId = 0; //TODO
	protected DomainParticipant participant = null;
	protected Topic topic = null;
	
	public rtiDDSpubsubObject(int domainId) {
		this.domainId = domainId;
		
		createParticipant();
	}
	protected void createParticipant() {
		participant = DomainParticipantFactory.TheParticipantFactory.
        create_participant(
            domainId, DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
            null /* listener */, StatusKind.STATUS_MASK_NONE);
        if (participant == null) {
            System.err.println("create_participant error\n");
            return;
        }
	}
	public void finalize() throws Throwable{
		if(participant != null) {
            participant.delete_contained_entities();

            DomainParticipantFactory.TheParticipantFactory.
            delete_participant(participant);
        }
    	super.finalize();
	}
}
