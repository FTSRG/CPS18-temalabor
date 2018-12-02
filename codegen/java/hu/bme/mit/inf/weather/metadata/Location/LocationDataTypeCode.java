
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.metadata.Location;

import com.rti.dds.typecode.*;

public class  LocationDataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        StructMember sm[]=new StructMember[3];

        sm[__i]=new  StructMember("name", false, (short)-1,  false,(TypeCode) new TypeCode(TCKind.TK_STRING,60),0 , false);__i++;
        sm[__i]=new  StructMember("latitude", false, (short)-1,  false,(TypeCode) TypeCode.TC_DOUBLE,1 , false);__i++;
        sm[__i]=new  StructMember("longitude", false, (short)-1,  false,(TypeCode) TypeCode.TC_DOUBLE,2 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("metadata::Location::LocationData",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,  sm);        
        return tc;
    }
}

