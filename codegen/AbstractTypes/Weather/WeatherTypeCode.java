
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

package AbstractTypes.Weather;

import com.rti.dds.typecode.*;

public class  WeatherTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        ValueMember sm[]=new ValueMember[0];

        tc = TypeCodeFactory.TheTypeCodeFactory.create_value_tc("AbstractTypes::Weather::Weather",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY, VM_NONE.VALUE,AbstractTypes.DataModel.DataTypeCode.VALUE, sm);        
        return tc;
    }
}

