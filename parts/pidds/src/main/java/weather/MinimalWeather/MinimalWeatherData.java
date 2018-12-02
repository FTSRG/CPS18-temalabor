

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package weather.MinimalWeather;
import metadata.Metadata.*;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class MinimalWeatherData   implements Copyable, Serializable{

    public double Temperature= 0;
    public double Humidity= 0;
    public Metadata metadata = (Metadata)Metadata.create();

    public MinimalWeatherData() {

    }
    public MinimalWeatherData (MinimalWeatherData other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        MinimalWeatherData self;
        self = new  MinimalWeatherData();
        self.clear();
        return self;

    }

    public void clear() {

        Temperature= 0;
        Humidity= 0;
        if (metadata != null) {
            metadata.clear();
        }
    }

    public boolean equals(Object o) {

        if (o == null) {
            return false;
        }        

        if(getClass() != o.getClass()) {
            return false;
        }

        MinimalWeatherData otherObj = (MinimalWeatherData)o;

        if(Temperature != otherObj.Temperature) {
            return false;
        }
        if(Humidity != otherObj.Humidity) {
            return false;
        }
        if(!metadata.equals(otherObj.metadata)) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;
        __result += (int)Temperature;
        __result += (int)Humidity;
        __result += metadata.hashCode(); 
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>MinimalWeatherDataTypeSupport</code>
    * rather than here by using the <code>-noCopyable</code> option
    * to rtiddsgen.
    * 
    * @param src The Object which contains the data to be copied.
    * @return Returns <code>this</code>.
    * @exception NullPointerException If <code>src</code> is null.
    * @exception ClassCastException If <code>src</code> is not the 
    * same type as <code>this</code>.
    * @see com.rti.dds.infrastructure.Copyable#copy_from(java.lang.Object)
    */
    public Object copy_from(Object src) {

        MinimalWeatherData typedSrc = (MinimalWeatherData) src;
        MinimalWeatherData typedDst = this;

        typedDst.Temperature = typedSrc.Temperature;
        typedDst.Humidity = typedSrc.Humidity;
        typedDst.metadata = (Metadata) typedDst.metadata.copy_from(typedSrc.metadata);

        return this;
    }

    public String toString(){
        return toString("", 0);
    }

    public String toString(String desc, int indent) {
        StringBuffer strBuffer = new StringBuffer();        

        if (desc != null) {
            CdrHelper.printIndent(strBuffer, indent);
            strBuffer.append(desc).append(":\n");
        }

        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("Temperature: ").append(Temperature).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("Humidity: ").append(Humidity).append("\n");  
        strBuffer.append(metadata.toString("metadata ", indent+1));

        return strBuffer.toString();
    }

}
