
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from model.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#pragma unmanaged
#include "ndds/ndds_cpp.h"
#pragma managed

using namespace System;
using namespace System::Collections;
using namespace DDS;

#include "model.h"

namespace metadata {

    namespace Location {

        /* ========================================================================= */
        LocationData::LocationData() {
            name = "";
            latitude = 0;
            longitude = 0;
        }

        void LocationData::clear(){
            name = "";
            latitude = 0;
            longitude = 0;
        }

        System::Boolean LocationData::copy_from(LocationData^ src) {

            LocationData^ dst = this;

            dst->name = src->name;
            dst->latitude = src->latitude;
            dst->longitude = src->longitude;
            return true;
        }

        Boolean LocationData::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            LocationData^ otherObj =
            dynamic_cast<LocationData^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (!name->Equals(otherObj->name)) {
                return false;
            }
            if (latitude != otherObj->latitude) {
                return false;
            }
            if (longitude != otherObj->longitude) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ LocationData::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(LocationData_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* LocationData_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode LocationData_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE((60));
            static DDS_TypeCode_Member LocationData_g_tc_members[3]=
            {

                {
                    (char *)"name",/* Member name */
                    {
                        0,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"latitude",/* Member name */
                    {
                        1,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"longitude",/* Member name */
                    {
                        2,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode LocationData_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"metadata::Location::LocationData", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    LocationData_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for LocationData*/

            if (is_initialized) {
                return &LocationData_g_tc;
            }

            LocationData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&LocationData_g_tc_name_string;

            LocationData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            LocationData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            is_initialized = RTI_TRUE;

            return &LocationData_g_tc;
        }
    } /* namespace Location  */

    namespace Metadata {

        /* ========================================================================= */
        Metadata::Metadata() {
            timestamp = 0;
            location = gcnew metadata::Location::LocationData ();
        }

        void Metadata::clear(){
            timestamp = 0;
            if (location!= nullptr) {
                location->clear();
            }
        }

        System::Boolean Metadata::copy_from(Metadata^ src) {

            Metadata^ dst = this;

            dst->timestamp = src->timestamp;
            dst->location->copy_from(src->location); 
            return true;
        }

        Boolean Metadata::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            Metadata^ otherObj =
            dynamic_cast<Metadata^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (timestamp != otherObj->timestamp) {
                return false;
            }
            if (!location->Equals(otherObj->location)) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ Metadata::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(Metadata_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* Metadata_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member Metadata_g_tc_members[2]=
            {

                {
                    (char *)"timestamp",/* Member name */
                    {
                        0,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"location",/* Member name */
                    {
                        1,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode Metadata_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"metadata::Metadata::Metadata", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    Metadata_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for Metadata*/

            if (is_initialized) {
                return &Metadata_g_tc;
            }

            Metadata_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

            Metadata_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)metadata::Location::LocationData_get_typecode();

            is_initialized = RTI_TRUE;

            return &Metadata_g_tc;
        }
    } /* namespace Metadata  */

} /* namespace metadata  */

namespace weather {

    namespace MinimalWeather {

        /* ========================================================================= */
        MinimalWeatherData::MinimalWeatherData() {
            Temerature = 0;
            Humidity = 0;
            metadata = gcnew metadata::Metadata ();
        }

        void MinimalWeatherData::clear(){
            Temerature = 0;
            Humidity = 0;
            if (metadata!= nullptr) {
                metadata->clear();
            }
        }

        System::Boolean MinimalWeatherData::copy_from(MinimalWeatherData^ src) {

            MinimalWeatherData^ dst = this;

            dst->Temerature = src->Temerature;
            dst->Humidity = src->Humidity;
            dst->metadata->copy_from(src->metadata); 
            return true;
        }

        Boolean MinimalWeatherData::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            MinimalWeatherData^ otherObj =
            dynamic_cast<MinimalWeatherData^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (Temerature != otherObj->Temerature) {
                return false;
            }
            if (Humidity != otherObj->Humidity) {
                return false;
            }
            if (!metadata->Equals(otherObj->metadata)) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ MinimalWeatherData::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(MinimalWeatherData_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* MinimalWeatherData_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member MinimalWeatherData_g_tc_members[3]=
            {

                {
                    (char *)"Temerature",/* Member name */
                    {
                        0,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"Humidity",/* Member name */
                    {
                        1,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"metadata",/* Member name */
                    {
                        2,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode MinimalWeatherData_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"weather::MinimalWeather::MinimalWeatherData", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    MinimalWeatherData_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for MinimalWeatherData*/

            if (is_initialized) {
                return &MinimalWeatherData_g_tc;
            }

            MinimalWeatherData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MinimalWeatherData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            MinimalWeatherData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)metadata::Metadata_get_typecode();

            is_initialized = RTI_TRUE;

            return &MinimalWeatherData_g_tc;
        }
    } /* namespace MinimalWeather  */

    namespace ExtendedWeather {

        /* ========================================================================= */
        ExtendedWeatherData::ExtendedWeatherData() {
            Pressure = 0;
            WindDirection = 0;
            WindSpeed = 0;
        }

        void ExtendedWeatherData::clear(){
            weather::MinimalWeather::MinimalWeatherData::clear();
            Pressure = 0;
            WindDirection = 0;
            WindSpeed = 0;
        }

        System::Boolean ExtendedWeatherData::copy_from(ExtendedWeatherData^ src) {
            if(!weather::MinimalWeather::MinimalWeatherData::copy_from((weather::MinimalWeather::MinimalWeatherData^) src)) {
                return false;
            }

            ExtendedWeatherData^ dst = this;

            dst->Pressure = src->Pressure;
            dst->WindDirection = src->WindDirection;
            dst->WindSpeed = src->WindSpeed;
            return true;
        }

        Boolean ExtendedWeatherData::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            if (!weather::MinimalWeather::MinimalWeatherData::Equals(other)) {
                return false;
            }
            ExtendedWeatherData^ otherObj =
            dynamic_cast<ExtendedWeatherData^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (Pressure != otherObj->Pressure) {
                return false;
            }
            if (WindDirection != otherObj->WindDirection) {
                return false;
            }
            if (WindSpeed != otherObj->WindSpeed) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ ExtendedWeatherData::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(ExtendedWeatherData_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* ExtendedWeatherData_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member ExtendedWeatherData_g_tc_members[3]=
            {

                {
                    (char *)"Pressure",/* Member name */
                    {
                        3,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"WindDirection",/* Member name */
                    {
                        4,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"WindSpeed",/* Member name */
                    {
                        5,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode ExtendedWeatherData_g_tc =
            {{
                    DDS_TK_VALUE,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"weather::ExtendedWeather::ExtendedWeatherData", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    ExtendedWeatherData_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for ExtendedWeatherData*/

            if (is_initialized) {
                return &ExtendedWeatherData_g_tc;
            }

            ExtendedWeatherData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            ExtendedWeatherData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            ExtendedWeatherData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            ExtendedWeatherData_g_tc._data._typeCode = (RTICdrTypeCode *)weather::MinimalWeather::MinimalWeatherData_get_typecode(); /* Base class */

            is_initialized = RTI_TRUE;

            return &ExtendedWeatherData_g_tc;
        }
    } /* namespace ExtendedWeather  */

    namespace Cloud {

        /* ========================================================================= */
        CloudData::CloudData() {
            Value = 0;
            description = "";
        }

        void CloudData::clear(){
            Value = 0;
            description = "";
        }

        System::Boolean CloudData::copy_from(CloudData^ src) {

            CloudData^ dst = this;

            dst->Value = src->Value;
            dst->description = src->description;
            return true;
        }

        Boolean CloudData::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            CloudData^ otherObj =
            dynamic_cast<CloudData^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (Value != otherObj->Value) {
                return false;
            }
            if (!description->Equals(otherObj->description)) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ CloudData::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(CloudData_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* CloudData_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode CloudData_g_tc_description_string = DDS_INITIALIZE_STRING_TYPECODE((25));
            static DDS_TypeCode_Member CloudData_g_tc_members[2]=
            {

                {
                    (char *)"Value",/* Member name */
                    {
                        0,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"description",/* Member name */
                    {
                        1,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode CloudData_g_tc =
            {{
                    DDS_TK_STRUCT,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"weather::Cloud::CloudData", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    2, /* Number of members */
                    CloudData_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for CloudData*/

            if (is_initialized) {
                return &CloudData_g_tc;
            }

            CloudData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

            CloudData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&CloudData_g_tc_description_string;

            is_initialized = RTI_TRUE;

            return &CloudData_g_tc;
        }
    } /* namespace Cloud  */

    namespace ForecastInputWeather {

        /* ========================================================================= */
        ForecastInputWeatherData::ForecastInputWeatherData() {
            SeaLevelPressure = 0;
            Phenomena = "";
            cloud = gcnew weather::Cloud::CloudData ();
        }

        void ForecastInputWeatherData::clear(){
            weather::ExtendedWeather::ExtendedWeatherData::clear();
            SeaLevelPressure = 0;
            Phenomena = "";
            if (cloud!= nullptr) {
                cloud->clear();
            }
        }

        System::Boolean ForecastInputWeatherData::copy_from(ForecastInputWeatherData^ src) {
            if(!weather::ExtendedWeather::ExtendedWeatherData::copy_from((weather::ExtendedWeather::ExtendedWeatherData^) src)) {
                return false;
            }

            ForecastInputWeatherData^ dst = this;

            dst->SeaLevelPressure = src->SeaLevelPressure;
            dst->Phenomena = src->Phenomena;
            dst->cloud->copy_from(src->cloud); 
            return true;
        }

        Boolean ForecastInputWeatherData::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            if (!weather::ExtendedWeather::ExtendedWeatherData::Equals(other)) {
                return false;
            }
            ForecastInputWeatherData^ otherObj =
            dynamic_cast<ForecastInputWeatherData^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (SeaLevelPressure != otherObj->SeaLevelPressure) {
                return false;
            }
            if (!Phenomena->Equals(otherObj->Phenomena)) {
                return false;
            }
            if (!cloud->Equals(otherObj->cloud)) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ ForecastInputWeatherData::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(ForecastInputWeatherData_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* ForecastInputWeatherData_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode ForecastInputWeatherData_g_tc_Phenomena_string = DDS_INITIALIZE_STRING_TYPECODE((80));
            static DDS_TypeCode_Member ForecastInputWeatherData_g_tc_members[3]=
            {

                {
                    (char *)"SeaLevelPressure",/* Member name */
                    {
                        6,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"Phenomena",/* Member name */
                    {
                        7,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"cloud",/* Member name */
                    {
                        8,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode ForecastInputWeatherData_g_tc =
            {{
                    DDS_TK_VALUE,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"weather::ForecastInputWeather::ForecastInputWeatherData", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    3, /* Number of members */
                    ForecastInputWeatherData_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for ForecastInputWeatherData*/

            if (is_initialized) {
                return &ForecastInputWeatherData_g_tc;
            }

            ForecastInputWeatherData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            ForecastInputWeatherData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ForecastInputWeatherData_g_tc_Phenomena_string;

            ForecastInputWeatherData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)weather::Cloud::CloudData_get_typecode();

            ForecastInputWeatherData_g_tc._data._typeCode = (RTICdrTypeCode *)weather::ExtendedWeather::ExtendedWeatherData_get_typecode(); /* Base class */

            is_initialized = RTI_TRUE;

            return &ForecastInputWeatherData_g_tc;
        }
    } /* namespace ForecastInputWeather  */

    namespace AirportWeather {

        /* ========================================================================= */
        AirportWeatherData::AirportWeatherData() {
            WindGust = 0;
            WindDirChange = 0;
            WindDirChange1 = 0;
            DewPoint = 0;
            ViewDistance = 0;
        }

        void AirportWeatherData::clear(){
            weather::ExtendedWeather::ExtendedWeatherData::clear();
            WindGust = 0;
            WindDirChange = 0;
            WindDirChange1 = 0;
            DewPoint = 0;
            ViewDistance = 0;
        }

        System::Boolean AirportWeatherData::copy_from(AirportWeatherData^ src) {
            if(!weather::ExtendedWeather::ExtendedWeatherData::copy_from((weather::ExtendedWeather::ExtendedWeatherData^) src)) {
                return false;
            }

            AirportWeatherData^ dst = this;

            dst->WindGust = src->WindGust;
            dst->WindDirChange = src->WindDirChange;
            dst->WindDirChange1 = src->WindDirChange1;
            dst->DewPoint = src->DewPoint;
            dst->ViewDistance = src->ViewDistance;
            return true;
        }

        Boolean AirportWeatherData::Equals(Object^ other) {
            if (other == nullptr) {
                return false;
            }        
            if (this == other) {
                return true;
            }
            if (!weather::ExtendedWeather::ExtendedWeatherData::Equals(other)) {
                return false;
            }
            AirportWeatherData^ otherObj =
            dynamic_cast<AirportWeatherData^>(other);
            if (otherObj == nullptr) {
                return false;
            }

            if (WindGust != otherObj->WindGust) {
                return false;
            }
            if (WindDirChange != otherObj->WindDirChange) {
                return false;
            }
            if (WindDirChange1 != otherObj->WindDirChange1) {
                return false;
            }
            if (DewPoint != otherObj->DewPoint) {
                return false;
            }
            if (ViewDistance != otherObj->ViewDistance) {
                return false;
            }
            return true;
        }

        DDS::TypeCode^ AirportWeatherData::get_typecode() {
            if (_typecode == nullptr) {
                _typecode = gcnew DDS::TypeCode(AirportWeatherData_get_typecode());
            }
            return _typecode;
        }

        DDS_TypeCode* AirportWeatherData_get_typecode()
        {
            static RTIBool is_initialized = RTI_FALSE;

            static DDS_TypeCode_Member AirportWeatherData_g_tc_members[5]=
            {

                {
                    (char *)"WindGust",/* Member name */
                    {
                        6,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"WindDirChange",/* Member name */
                    {
                        7,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"WindDirChange1",/* Member name */
                    {
                        8,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"DewPoint",/* Member name */
                    {
                        9,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }, 
                {
                    (char *)"ViewDistance",/* Member name */
                    {
                        10,/* Representation ID */          
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Bitfield bits */
                        NULL/* Member type code is assigned later */
                    },
                    0, /* Ignored */
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                    DDS_PUBLIC_MEMBER,/* Member visibility */
                    1,
                    NULL/* Ignored */
                }
            };

            static DDS_TypeCode AirportWeatherData_g_tc =
            {{
                    DDS_TK_VALUE,/* Kind */
                    DDS_BOOLEAN_FALSE, /* Ignored */
                    -1, /*Ignored*/
                    (char *)"weather::AirportWeather::AirportWeatherData", /* Name */
                    NULL, /* Ignored */      
                    0, /* Ignored */
                    0, /* Ignored */
                    NULL, /* Ignored */
                    5, /* Number of members */
                    AirportWeatherData_g_tc_members, /* Members */
                    DDS_VM_NONE  /* Ignored */         
                }}; /* Type code for AirportWeatherData*/

            if (is_initialized) {
                return &AirportWeatherData_g_tc;
            }

            AirportWeatherData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            AirportWeatherData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            AirportWeatherData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            AirportWeatherData_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            AirportWeatherData_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

            AirportWeatherData_g_tc._data._typeCode = (RTICdrTypeCode *)weather::ExtendedWeather::ExtendedWeatherData_get_typecode(); /* Base class */

            is_initialized = RTI_TRUE;

            return &AirportWeatherData_g_tc;
        }
    } /* namespace AirportWeather  */

} /* namespace weather  */

