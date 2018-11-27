
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package MessageTypes.Weather;

import com.rti.dds.typecode.*;

public class  TemperatureForecastTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        ValueMember sm[]=new ValueMember[3];

        sm[__i]=new  ValueMember("forecastTime", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) new TypeCode(TCKind.TK_STRING,255),4 , false);__i++;
        sm[__i]=new  ValueMember("minimum", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,5 , false);__i++;
        sm[__i]=new  ValueMember("maximum", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,6 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_value_tc("MessageTypes::Weather::TemperatureForecast",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY, VM_NONE.VALUE,AbstractTypes.Weather.WeatherTypeCode.VALUE, sm);        
        return tc;
    }
}

