

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.weather.ForecastInputWeather;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class ForecastInputWeatherData  extends hu.bme.mit.inf.weather.weather.ExtendedWeather.ExtendedWeatherData implements Copyable, Serializable{

    public double SeaLevelPressure= 0;
    public String Phenomena=  "" ; /* maximum length = (80) */
    public hu.bme.mit.inf.weather.weather.Cloud.CloudData cloud = (hu.bme.mit.inf.weather.weather.Cloud.CloudData)hu.bme.mit.inf.weather.weather.Cloud.CloudData.create();

    public ForecastInputWeatherData() {

        super();

    }
    public ForecastInputWeatherData (ForecastInputWeatherData other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        ForecastInputWeatherData self;
        self = new  ForecastInputWeatherData();
        self.clear();
        return self;

    }

    public void clear() {

        super.clear();
        SeaLevelPressure= 0;
        Phenomena=  ""; 
        if (cloud != null) {
            cloud.clear();
        }
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

        ForecastInputWeatherData otherObj = (ForecastInputWeatherData)o;

        if(SeaLevelPressure != otherObj.SeaLevelPressure) {
            return false;
        }
        if(!Phenomena.equals(otherObj.Phenomena)) {
            return false;
        }
        if(!cloud.equals(otherObj.cloud)) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;

        __result = super.hashCode();
        __result += (int)SeaLevelPressure;
        __result += Phenomena.hashCode(); 
        __result += cloud.hashCode(); 
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>ForecastInputWeatherDataTypeSupport</code>
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

        ForecastInputWeatherData typedSrc = (ForecastInputWeatherData) src;
        ForecastInputWeatherData typedDst = this;
        super.copy_from(typedSrc);
        typedDst.SeaLevelPressure = typedSrc.SeaLevelPressure;
        typedDst.Phenomena = typedSrc.Phenomena;
        typedDst.cloud = (hu.bme.mit.inf.weather.weather.Cloud.CloudData) typedDst.cloud.copy_from(typedSrc.cloud);

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
        strBuffer.append("SeaLevelPressure: ").append(SeaLevelPressure).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("Phenomena: ").append(Phenomena).append("\n");  
        strBuffer.append(cloud.toString("cloud ", indent+1));

        return strBuffer.toString();
    }

}
