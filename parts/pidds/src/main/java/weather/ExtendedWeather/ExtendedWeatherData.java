

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package weather.ExtendedWeather;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class ExtendedWeatherData  extends weather.MinimalWeather.MinimalWeatherData implements Copyable, Serializable{

    public double Pressure= 0;
    public double WindDirection= 0;
    public double WindSpeed= 0;

    public ExtendedWeatherData() {

        super();

    }
    public ExtendedWeatherData (ExtendedWeatherData other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        ExtendedWeatherData self;
        self = new  ExtendedWeatherData();
        self.clear();
        return self;

    }

    public void clear() {

        super.clear();
        Pressure= 0;
        WindDirection= 0;
        WindSpeed= 0;
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

        ExtendedWeatherData otherObj = (ExtendedWeatherData)o;

        if(Pressure != otherObj.Pressure) {
            return false;
        }
        if(WindDirection != otherObj.WindDirection) {
            return false;
        }
        if(WindSpeed != otherObj.WindSpeed) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;

        __result = super.hashCode();
        __result += (int)Pressure;
        __result += (int)WindDirection;
        __result += (int)WindSpeed;
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>ExtendedWeatherDataTypeSupport</code>
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

        ExtendedWeatherData typedSrc = (ExtendedWeatherData) src;
        ExtendedWeatherData typedDst = this;
        super.copy_from(typedSrc);
        typedDst.Pressure = typedSrc.Pressure;
        typedDst.WindDirection = typedSrc.WindDirection;
        typedDst.WindSpeed = typedSrc.WindSpeed;

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
        strBuffer.append("Pressure: ").append(Pressure).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("WindDirection: ").append(WindDirection).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("WindSpeed: ").append(WindSpeed).append("\n");  

        return strBuffer.toString();
    }

}
