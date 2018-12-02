

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.weather.AirportWeather;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class AirportWeatherData  extends hu.bme.mit.inf.weather.weather.ExtendedWeather.ExtendedWeatherData implements Copyable, Serializable{

    public double WindGust= 0;
    public double WindDirChange= 0;
    public double WindDirChange1= 0;
    public double DewPoint= 0;
    public double ViewDistance= 0;

    public AirportWeatherData() {

        super();

    }
    public AirportWeatherData (AirportWeatherData other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        AirportWeatherData self;
        self = new  AirportWeatherData();
        self.clear();
        return self;

    }

    public void clear() {

        super.clear();
        WindGust= 0;
        WindDirChange= 0;
        WindDirChange1= 0;
        DewPoint= 0;
        ViewDistance= 0;
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

        AirportWeatherData otherObj = (AirportWeatherData)o;

        if(WindGust != otherObj.WindGust) {
            return false;
        }
        if(WindDirChange != otherObj.WindDirChange) {
            return false;
        }
        if(WindDirChange1 != otherObj.WindDirChange1) {
            return false;
        }
        if(DewPoint != otherObj.DewPoint) {
            return false;
        }
        if(ViewDistance != otherObj.ViewDistance) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;

        __result = super.hashCode();
        __result += (int)WindGust;
        __result += (int)WindDirChange;
        __result += (int)WindDirChange1;
        __result += (int)DewPoint;
        __result += (int)ViewDistance;
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>AirportWeatherDataTypeSupport</code>
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

        AirportWeatherData typedSrc = (AirportWeatherData) src;
        AirportWeatherData typedDst = this;
        super.copy_from(typedSrc);
        typedDst.WindGust = typedSrc.WindGust;
        typedDst.WindDirChange = typedSrc.WindDirChange;
        typedDst.WindDirChange1 = typedSrc.WindDirChange1;
        typedDst.DewPoint = typedSrc.DewPoint;
        typedDst.ViewDistance = typedSrc.ViewDistance;

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
        strBuffer.append("WindGust: ").append(WindGust).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("WindDirChange: ").append(WindDirChange).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("WindDirChange1: ").append(WindDirChange1).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("DewPoint: ").append(DewPoint).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("ViewDistance: ").append(ViewDistance).append("\n");  

        return strBuffer.toString();
    }

}
