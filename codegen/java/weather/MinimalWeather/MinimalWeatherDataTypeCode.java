
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package weather.MinimalWeather;

import com.rti.dds.typecode.*;

public class  MinimalWeatherDataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        StructMember sm[]=new StructMember[3];

        sm[__i]=new  StructMember("Temerature", false, (short)-1,  false,(TypeCode) TypeCode.TC_DOUBLE,0 , false);__i++;
        sm[__i]=new  StructMember("Humidity", false, (short)-1,  false,(TypeCode) TypeCode.TC_DOUBLE,1 , false);__i++;
        sm[__i]=new  StructMember("metadata", false, (short)-1,  false,(TypeCode) metadata.MetadataTypeCode.VALUE,2 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("weather::MinimalWeather::MinimalWeatherData",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,  sm);        
        return tc;
    }
}

