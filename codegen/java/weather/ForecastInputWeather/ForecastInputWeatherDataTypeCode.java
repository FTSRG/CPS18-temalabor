
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package weather.ForecastInputWeather;

import com.rti.dds.typecode.*;

public class  ForecastInputWeatherDataTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        ValueMember sm[]=new ValueMember[3];

        sm[__i]=new  ValueMember("SeaLevelPressure", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,6 , false);__i++;
        sm[__i]=new  ValueMember("Phenomena", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) new TypeCode(TCKind.TK_STRING,80),7 , false);__i++;
        sm[__i]=new  ValueMember("cloud", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) weather.Cloud.CloudDataTypeCode.VALUE,8 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_value_tc("weather::ForecastInputWeather::ForecastInputWeatherData",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY, VM_NONE.VALUE,weather.ExtendedWeather.ExtendedWeatherDataTypeCode.VALUE, sm);        
        return tc;
    }
}

