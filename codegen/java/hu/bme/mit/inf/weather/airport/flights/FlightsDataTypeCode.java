
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.airport.flights;

import com.rti.dds.typecode.*;

public class  FlightsDataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        StructMember sm[]=new StructMember[5];

        sm[__i]=new  StructMember("metadata", false, (short)-1,  false,(TypeCode) hu.bme.mit.inf.weather.metadata.Metadata.MetadataTypeCode.VALUE,0 , false);__i++;
        sm[__i]=new  StructMember("id", false, (short)-1,  false,(TypeCode) TypeCode.TC_LONG,1 , false);__i++;
        sm[__i]=new  StructMember("originAirport", false, (short)-1,  false,(TypeCode) new TypeCode(TCKind.TK_STRING,5),2 , false);__i++;
        sm[__i]=new  StructMember("destinationAirport", false, (short)-1,  false,(TypeCode) new TypeCode(TCKind.TK_STRING,5),3 , false);__i++;
        sm[__i]=new  StructMember("weatherDelay", false, (short)-1,  false,(TypeCode) TypeCode.TC_LONG,4 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("airport::flights::FlightsData",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,  sm);        
        return tc;
    }
}

