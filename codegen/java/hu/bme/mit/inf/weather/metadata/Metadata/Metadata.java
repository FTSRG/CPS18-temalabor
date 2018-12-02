

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.metadata.Metadata;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class Metadata   implements Copyable, Serializable{

    public long timestamp= 0;
    public boolean isValid= false;
    public hu.bme.mit.inf.weather.metadata.Location.LocationData location = (hu.bme.mit.inf.weather.metadata.Location.LocationData)hu.bme.mit.inf.weather.metadata.Location.LocationData.create();
    public hu.bme.mit.inf.weather.metadata.Source.SourceData source = (hu.bme.mit.inf.weather.metadata.Source.SourceData)hu.bme.mit.inf.weather.metadata.Source.SourceData.create();

    public Metadata() {

    }
    public Metadata (Metadata other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        Metadata self;
        self = new  Metadata();
        self.clear();
        return self;

    }

    public void clear() {

        timestamp= 0;
        isValid= false;
        if (location != null) {
            location.clear();
        }
        if (source != null) {
            source.clear();
        }
    }

    public boolean equals(Object o) {

        if (o == null) {
            return false;
        }        

        if(getClass() != o.getClass()) {
            return false;
        }

        Metadata otherObj = (Metadata)o;

        if(timestamp != otherObj.timestamp) {
            return false;
        }
        if(isValid != otherObj.isValid) {
            return false;
        }
        if(!location.equals(otherObj.location)) {
            return false;
        }
        if(!source.equals(otherObj.source)) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;
        __result += (int)timestamp;
        __result += (isValid == true)?1:0;
        __result += location.hashCode(); 
        __result += source.hashCode(); 
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>MetadataTypeSupport</code>
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

        Metadata typedSrc = (Metadata) src;
        Metadata typedDst = this;

        typedDst.timestamp = typedSrc.timestamp;
        typedDst.isValid = typedSrc.isValid;
        typedDst.location = (hu.bme.mit.inf.weather.metadata.Location.LocationData) typedDst.location.copy_from(typedSrc.location);
        typedDst.source = (hu.bme.mit.inf.weather.metadata.Source.SourceData) typedDst.source.copy_from(typedSrc.source);

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
        strBuffer.append("timestamp: ").append(timestamp).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("isValid: ").append(isValid).append("\n");  
        strBuffer.append(location.toString("location ", indent+1));
        strBuffer.append(source.toString("source ", indent+1));

        return strBuffer.toString();
    }

}
