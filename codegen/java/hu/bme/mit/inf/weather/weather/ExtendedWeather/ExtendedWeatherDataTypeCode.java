
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.weather.weather.ExtendedWeather;

import com.rti.dds.typecode.*;

public class  ExtendedWeatherDataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        ValueMember sm[]=new ValueMember[3];

        sm[__i]=new  ValueMember("Pressure", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,3 , false);__i++;
        sm[__i]=new  ValueMember("WindDirection", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,4 , false);__i++;
        sm[__i]=new  ValueMember("WindSpeed", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,5 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_value_tc("weather::ExtendedWeather::ExtendedWeatherData",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY, VM_NONE.VALUE,hu.bme.mit.inf.weather.weather.MinimalWeather.MinimalWeatherDataTypeCode.VALUE, sm);        
        return tc;
    }
}

