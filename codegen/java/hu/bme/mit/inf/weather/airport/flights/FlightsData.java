

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.airport.flights;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class FlightsData   implements Copyable, Serializable{

    public hu.bme.mit.inf.weather.metadata.Metadata.Metadata metadata = (hu.bme.mit.inf.weather.metadata.Metadata.Metadata)hu.bme.mit.inf.weather.metadata.Metadata.Metadata.create();
    public int id= 0;
    public String originAirport=  "" ; /* maximum length = (5) */
    public String destinationAirport=  "" ; /* maximum length = (5) */
    public int weatherDelay= 0;

    public FlightsData() {

    }
    public FlightsData (FlightsData other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        FlightsData self;
        self = new  FlightsData();
        self.clear();
        return self;

    }

    public void clear() {

        if (metadata != null) {
            metadata.clear();
        }
        id= 0;
        originAirport=  ""; 
        destinationAirport=  ""; 
        weatherDelay= 0;
    }

    public boolean equals(Object o) {

        if (o == null) {
            return false;
        }        

        if(getClass() != o.getClass()) {
            return false;
        }

        FlightsData otherObj = (FlightsData)o;

        if(!metadata.equals(otherObj.metadata)) {
            return false;
        }
        if(id != otherObj.id) {
            return false;
        }
        if(!originAirport.equals(otherObj.originAirport)) {
            return false;
        }
        if(!destinationAirport.equals(otherObj.destinationAirport)) {
            return false;
        }
        if(weatherDelay != otherObj.weatherDelay) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;
        __result += metadata.hashCode(); 
        __result += (int)id;
        __result += originAirport.hashCode(); 
        __result += destinationAirport.hashCode(); 
        __result += (int)weatherDelay;
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>FlightsDataTypeSupport</code>
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

        FlightsData typedSrc = (FlightsData) src;
        FlightsData typedDst = this;

        typedDst.metadata = (hu.bme.mit.inf.weather.metadata.Metadata.Metadata) typedDst.metadata.copy_from(typedSrc.metadata);
        typedDst.id = typedSrc.id;
        typedDst.originAirport = typedSrc.originAirport;
        typedDst.destinationAirport = typedSrc.destinationAirport;
        typedDst.weatherDelay = typedSrc.weatherDelay;

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

        strBuffer.append(metadata.toString("metadata ", indent+1));
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("id: ").append(id).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("originAirport: ").append(originAirport).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("destinationAirport: ").append(destinationAirport).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("weatherDelay: ").append(weatherDelay).append("\n");  

        return strBuffer.toString();
    }

}
