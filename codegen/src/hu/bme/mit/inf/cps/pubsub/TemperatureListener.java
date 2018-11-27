package hu.bme.mit.inf.cps.pubsub;

import com.rti.dds.infrastructure.RETCODE_NO_DATA;
import com.rti.dds.infrastructure.ResourceLimitsQosPolicy;
import com.rti.dds.subscription.DataReader;
import com.rti.dds.subscription.DataReaderAdapter;
import com.rti.dds.subscription.InstanceStateKind;
import com.rti.dds.subscription.SampleInfo;
import com.rti.dds.subscription.SampleInfoSeq;
import com.rti.dds.subscription.SampleStateKind;
import com.rti.dds.subscription.ViewStateKind;

import hu.bme.mit.inf.cps._interface.Weather.Temperature;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureDataReader;
import hu.bme.mit.inf.cps._interface.Weather.TemperatureSeq;

public abstract class TemperatureListener extends DataReaderAdapter {

    TemperatureSeq _dataSeq = new TemperatureSeq();
    SampleInfoSeq _infoSeq = new SampleInfoSeq();

    public abstract void onValidDataAvailable(Temperature data);
    public abstract void onInvalidData();
    public abstract void onNoDataAvailable();

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
                	Temperature data = (Temperature)_dataSeq.get(i);
                	onValidDataAvailable(data);
                } else {
                	
                }
            }
        } catch (RETCODE_NO_DATA noData) {
        	onNoDataAvailable();
        } finally {
            TemperatureReader.return_loan(_dataSeq, _infoSeq);
        }
    }
    
}
