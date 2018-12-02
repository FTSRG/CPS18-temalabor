

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.weather.Cloud;

import com.rti.dds.infrastructure.*;
import com.rti.dds.infrastructure.Copyable;
import java.io.Serializable;
import com.rti.dds.cdr.CdrHelper;

public class CloudData   implements Copyable, Serializable{

    public short Value= 0;
    public String description=  "" ; /* maximum length = (25) */

    public CloudData() {

    }
    public CloudData (CloudData other) {

        this();
        copy_from(other);
    }

    public static Object create() {

        CloudData self;
        self = new  CloudData();
        self.clear();
        return self;

    }

    public void clear() {

        Value= 0;
        description=  ""; 
    }

    public boolean equals(Object o) {

        if (o == null) {
            return false;
        }        

        if(getClass() != o.getClass()) {
            return false;
        }

        CloudData otherObj = (CloudData)o;

        if(Value != otherObj.Value) {
            return false;
        }
        if(!description.equals(otherObj.description)) {
            return false;
        }

        return true;
    }

    public int hashCode() {
        int __result = 0;
        __result += (int)Value;
        __result += description.hashCode(); 
        return __result;
    }

    /**
    * This is the implementation of the <code>Copyable</code> interface.
    * This method will perform a deep copy of <code>src</code>
    * This method could be placed into <code>CloudDataTypeSupport</code>
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

        CloudData typedSrc = (CloudData) src;
        CloudData typedDst = this;

        typedDst.Value = typedSrc.Value;
        typedDst.description = typedSrc.description;

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
        strBuffer.append("Value: ").append(Value).append("\n");  
        CdrHelper.printIndent(strBuffer, indent+1);        
        strBuffer.append("description: ").append(description).append("\n");  

        return strBuffer.toString();
    }

}
