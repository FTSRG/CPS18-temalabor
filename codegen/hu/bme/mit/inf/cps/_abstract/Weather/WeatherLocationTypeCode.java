
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package hu.bme.mit.inf.cps._abstract.Weather;

import com.rti.dds.typecode.*;

public class  WeatherLocationTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        ValueMember sm[]=new ValueMember[2];

        sm[__i]=new  ValueMember("lat", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,1 , false);__i++;
        sm[__i]=new  ValueMember("longi", false, (short)-1,  false,PUBLIC_MEMBER.VALUE,(TypeCode) TypeCode.TC_DOUBLE,2 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_value_tc("abstract::Weather::WeatherLocation",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY, VM_NONE.VALUE,hu.bme.mit.inf.cps._abstract.DataModel.LocationTypeTypeCode.VALUE, sm);        
        return tc;
    }
}

