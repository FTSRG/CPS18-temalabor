
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package weather.AirportWeather;

import com.rti.dds.typecode.*;

public class  AirportWeatherDataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        ValueMember sm[]=new ValueMember[5];

        sm[__i]=new  ValueMember("WindGust", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,6 , false);__i++;
        sm[__i]=new  ValueMember("WindDirChange", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,7 , false);__i++;
        sm[__i]=new  ValueMember("WindDirChange1", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,8 , false);__i++;
        sm[__i]=new  ValueMember("DewPoint", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,9 , false);__i++;
        sm[__i]=new  ValueMember("ViewDistance", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,10 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_value_tc("weather::AirportWeather::AirportWeatherData",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY, VM_NONE.VALUE,weather.ExtendedWeather.ExtendedWeatherDataTypeCode.VALUE, sm);        
        return tc;
    }
}

