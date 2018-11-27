

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package MessageTypes.Weather;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class TemperatureForecast  extends AbstractTypes.Weather.Weather implements Copyable, Serializable{

    public String forecastTime=  "" ; /* maximum length = (255) */
    public double minimum= 0;
    public double maximum= 0;

    public TemperatureForecast() {

        super();

    }
    public TemperatureForecast (TemperatureForecast other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        TemperatureForecast self;
        self = new  TemperatureForecast();
        self.clear();
        return self;

    }

    public void clear() {

        super.clear();
        forecastTime=  ""; 
        minimum= 0;
        maximum= 0;
    }

    public boolean equals(Object o) {

        if (o == null) {
            return false;
        }        

        if (!super.equals(o)) {
            return false;
        }

        if(getClass() != o.getClass()) {
            return false;
        }

        TemperatureForecast otherObj = (TemperatureForecast)o;

        if(!forecastTime.equals(otherObj.forecastTime)) {
            return false;
        }
        if(minimum != otherObj.minimum) {
            return false;
        }
        if(maximum != otherObj.maximum) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;

        __result = super.hashCode();
        __result += forecastTime.hashCode(); 
        __result += (int)minimum;
        __result += (int)maximum;
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>TemperatureForecastTypeSupport</code>
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

        TemperatureForecast typedSrc = (TemperatureForecast) src;
        TemperatureForecast typedDst = this;
        super.copy_from(typedSrc);
        typedDst.forecastTime = typedSrc.forecastTime;
        typedDst.minimum = typedSrc.minimum;
        typedDst.maximum = typedSrc.maximum;

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

        strBuffer.append(super.toString("",indent));

        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("forecastTime: ").append(forecastTime).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("minimum: ").append(minimum).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("maximum: ").append(maximum).append("\n");  

        return strBuffer.toString();
    }

}
