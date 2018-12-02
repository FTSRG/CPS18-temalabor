
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.metadata.Metadata;

import com.rti.dds.typecode.*;

public class  MetadataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        StructMember sm[]=new StructMember[3];

        sm[__i]=new  StructMember("timestamp", false, (short)-1,  false,(TypeCode) TypeCode.TC_LONG,0 , false);__i++;
        sm[__i]=new  StructMember("location", false, (short)-1,  false,(TypeCode) hu.bme.mit.inf.weather.metadata.Location.LocationDataTypeCode.VALUE,1 , false);__i++;
        sm[__i]=new  StructMember("source", false, (short)-1,  false,(TypeCode) hu.bme.mit.inf.weather.metadata.Source.SourceDataTypeCode.VALUE,2 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("metadata::Metadata::Metadata",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,  sm);        
        return tc;
    }
}

