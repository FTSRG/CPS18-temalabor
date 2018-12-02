

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class Data   implements Copyable, Serializable{

    public String timestamp=  "" ; /* maximum length = (255) */
    public LocationType location = (LocationType)LocationType.create();
    public SensorMetaType sensorMeta = (SensorMetaType)SensorMetaType.create();
    public boolean isValid= false;

    public Data() {

    }
    public Data (Data other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        Data self;
        self = new  Data();
        self.clear();
        return self;

    }

    public void clear() {

        timestamp=  ""; 
        if (location != null) {
            location.clear();
        }
        if (sensorMeta != null) {
            sensorMeta.clear();
        }
        isValid= false;
    }

    public boolean equals(Object o) {

        if (o == null) {
            return false;
        }        

        if(getClass() != o.getClass()) {
            return false;
        }

        Data otherObj = (Data)o;

        if(!timestamp.equals(otherObj.timestamp)) {
            return false;
        }
        if(!location.equals(otherObj.location)) {
            return false;
        }
        if(!sensorMeta.equals(otherObj.sensorMeta)) {
            return false;
        }
        if(isValid != otherObj.isValid) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;
        __result += timestamp.hashCode(); 
        __result += location.hashCode(); 
        __result += sensorMeta.hashCode(); 
        __result += (isValid == true)?1:0;
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>DataTypeSupport</code>
    * rather than here by using the <code>-noCopyable</code> option
    * to rtiddsgen.
    * 
    * @param src The Object which contains the data to be copied.
    * @return Returns <code>this</code>.
    * @exception NullPointerException If <code>src</code> is null.
    * @exception ClassCastException If <code>src</code> is not the 
    * same type as <code>this</code>.
    * @see Copyable#copy_from(Object)
    */
    public Object copy_from(Object src) {

        Data typedSrc = (Data) src;
        Data typedDst = this;

        typedDst.timestamp = typedSrc.timestamp;
        typedDst.location = (LocationType) typedDst.location.copy_from(typedSrc.location);
        typedDst.sensorMeta = (SensorMetaType) typedDst.sensorMeta.copy_from(typedSrc.sensorMeta);
        typedDst.isValid = typedSrc.isValid;

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
        strBuffer.append(location.toString("location ", indent+1));
        strBuffer.append(sensorMeta.toString("sensorMeta ", indent+1));
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("isValid: ").append(isValid).append("\n");  

        return strBuffer.toString();
    }

}
