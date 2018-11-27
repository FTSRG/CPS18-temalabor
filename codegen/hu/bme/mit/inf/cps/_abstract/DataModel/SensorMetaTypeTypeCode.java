
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.cps._abstract.DataModel;

import com.rti.dds.typecode.*;

public class  SensorMetaTypeTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        StructMember sm[]=new StructMember[2];

        sm[__i]=new  StructMember("updateFreq", false, (short)-1,  false,(TypeCode) TypeCode.TC_ULONG,0 , false);__i++;
        sm[__i]=new  StructMember("sensorName", false, (short)-1,  false,(TypeCode) new TypeCode(TCKind.TK_STRING,255),1 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("abstract::DataModel::SensorMetaType",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,  sm);        
        return tc;
    }
}

