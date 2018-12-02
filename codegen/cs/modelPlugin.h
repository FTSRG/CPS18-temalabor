/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from model.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#pragma once

#include "model.h"

namespace metadata {

    namespace Source {

        /* ------------------------------------------------------------------------
        * Type: SourceData
        * ------------------------------------------------------------------------ */

        public ref class SourceDataPlugin :
        DefaultTypePlugin<SourceData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                SourceData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                SourceData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                SourceData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                SourceData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                SourceData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                SourceData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                SourceData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static SourceDataPlugin^ get_instance();

            static void dispose();

          private:
            SourceDataPlugin()
            : DefaultTypePlugin(
                "SourceData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                SourceData::get_typecode() ) {
                // empty
            }

            static SourceDataPlugin^ _singleton;
        };

    } /* namespace Source  */

    namespace Location {

        /* ------------------------------------------------------------------------
        * Type: LocationData
        * ------------------------------------------------------------------------ */

        public ref class LocationDataPlugin :
        DefaultTypePlugin<LocationData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                LocationData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                LocationData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                LocationData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                LocationData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                LocationData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                LocationData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                LocationData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static LocationDataPlugin^ get_instance();

            static void dispose();

          private:
            LocationDataPlugin()
            : DefaultTypePlugin(
                "LocationData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                LocationData::get_typecode() ) {
                // empty
            }

            static LocationDataPlugin^ _singleton;
        };

    } /* namespace Location  */

    namespace Metadata {

        /* ------------------------------------------------------------------------
        * Type: Metadata
        * ------------------------------------------------------------------------ */

        public ref class MetadataPlugin :
        DefaultTypePlugin<Metadata^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                Metadata^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                Metadata^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                Metadata^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                Metadata^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                Metadata^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                Metadata^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                Metadata^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static MetadataPlugin^ get_instance();

            static void dispose();

          private:
            MetadataPlugin()
            : DefaultTypePlugin(
                "Metadata",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                Metadata::get_typecode() ) {
                // empty
            }

            static MetadataPlugin^ _singleton;
        };

    } /* namespace Metadata  */

} /* namespace metadata  */

namespace weather {

    namespace MinimalWeather {

        /* ------------------------------------------------------------------------
        * Type: MinimalWeatherData
        * ------------------------------------------------------------------------ */

        public ref class MinimalWeatherDataPlugin :
        DefaultTypePlugin<MinimalWeatherData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                MinimalWeatherData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                MinimalWeatherData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                MinimalWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                MinimalWeatherData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                MinimalWeatherData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                MinimalWeatherData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                MinimalWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static MinimalWeatherDataPlugin^ get_instance();

            static void dispose();

          private:
            MinimalWeatherDataPlugin()
            : DefaultTypePlugin(
                "MinimalWeatherData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                MinimalWeatherData::get_typecode() ) {
                // empty
            }

            static MinimalWeatherDataPlugin^ _singleton;
        };

    } /* namespace MinimalWeather  */

    namespace ExtendedWeather {

        /* ------------------------------------------------------------------------
        * Type: ExtendedWeatherData
        * ------------------------------------------------------------------------ */

        public ref class ExtendedWeatherDataPlugin :
        DefaultTypePlugin<ExtendedWeatherData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                ExtendedWeatherData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                ExtendedWeatherData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                ExtendedWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                ExtendedWeatherData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                ExtendedWeatherData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                ExtendedWeatherData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                ExtendedWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static ExtendedWeatherDataPlugin^ get_instance();

            static void dispose();

          private:
            ExtendedWeatherDataPlugin()
            : DefaultTypePlugin(
                "ExtendedWeatherData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                ExtendedWeatherData::get_typecode() ) {
                // empty
            }

            static ExtendedWeatherDataPlugin^ _singleton;
        };

    } /* namespace ExtendedWeather  */

    namespace Cloud {

        /* ------------------------------------------------------------------------
        * Type: CloudData
        * ------------------------------------------------------------------------ */

        public ref class CloudDataPlugin :
        DefaultTypePlugin<CloudData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                CloudData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                CloudData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                CloudData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                CloudData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                CloudData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                CloudData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                CloudData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static CloudDataPlugin^ get_instance();

            static void dispose();

          private:
            CloudDataPlugin()
            : DefaultTypePlugin(
                "CloudData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                CloudData::get_typecode() ) {
                // empty
            }

            static CloudDataPlugin^ _singleton;
        };

    } /* namespace Cloud  */

    namespace ForecastInputWeather {

        /* ------------------------------------------------------------------------
        * Type: ForecastInputWeatherData
        * ------------------------------------------------------------------------ */

        public ref class ForecastInputWeatherDataPlugin :
        DefaultTypePlugin<ForecastInputWeatherData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                ForecastInputWeatherData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                ForecastInputWeatherData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                ForecastInputWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                ForecastInputWeatherData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                ForecastInputWeatherData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                ForecastInputWeatherData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                ForecastInputWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static ForecastInputWeatherDataPlugin^ get_instance();

            static void dispose();

          private:
            ForecastInputWeatherDataPlugin()
            : DefaultTypePlugin(
                "ForecastInputWeatherData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                ForecastInputWeatherData::get_typecode() ) {
                // empty
            }

            static ForecastInputWeatherDataPlugin^ _singleton;
        };

    } /* namespace ForecastInputWeather  */

    namespace AirportWeather {

        /* ------------------------------------------------------------------------
        * Type: AirportWeatherData
        * ------------------------------------------------------------------------ */

        public ref class AirportWeatherDataPlugin :
        DefaultTypePlugin<AirportWeatherData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                AirportWeatherData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                AirportWeatherData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                AirportWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                AirportWeatherData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                AirportWeatherData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                AirportWeatherData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                AirportWeatherData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static AirportWeatherDataPlugin^ get_instance();

            static void dispose();

          private:
            AirportWeatherDataPlugin()
            : DefaultTypePlugin(
                "AirportWeatherData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                AirportWeatherData::get_typecode() ) {
                // empty
            }

            static AirportWeatherDataPlugin^ _singleton;
        };

    } /* namespace AirportWeather  */

} /* namespace weather  */

namespace airport {

    namespace flights {

        /* ------------------------------------------------------------------------
        * Type: FlightsData
        * ------------------------------------------------------------------------ */

        public ref class FlightsDataPlugin :
        DefaultTypePlugin<FlightsData^> {
            // --- Support methods: ------------------------------------------------------
          public:
            void print_data(
                FlightsData^ sample,
                System::String^ desc,
                System::UInt32 indent);

            // --- (De)Serialize methods: ------------------------------------------------
          public:
            virtual System::Boolean serialize(
                TypePluginDefaultEndpointData^ endpoint_data,
                FlightsData^ sample,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                FlightsData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample, 
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean skip(
                TypePluginDefaultEndpointData^ endpoint_data,
                CdrStream% stream,
                System::Boolean skip_encapsulation,  
                System::Boolean skip_sample, 
                System::Object^ endpoint_plugin_qos);

            virtual System::UInt32 get_serialized_sample_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_min_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 size) override;

            virtual System::UInt32 get_serialized_sample_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                Boolean include_encapsulation,
                UInt16 encapsulation_id,
                UInt32 current_alignment,
                FlightsData^ sample) override;

            // ---  Key Management functions: --------------------------------------------
          public:
            virtual System::UInt32 get_serialized_key_max_size(
                TypePluginDefaultEndpointData^ endpoint_data,
                System::Boolean include_encapsulation,
                System::UInt16  encapsulation_id,
                System::UInt32 current_alignment) override;

            virtual System::Boolean serialize_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                FlightsData^ key,
                CdrStream% stream,
                System::Boolean serialize_encapsulation,
                System::UInt16  encapsulation_id,
                System::Boolean serialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            virtual System::Boolean deserialize_key_sample(
                TypePluginDefaultEndpointData^ endpoint_data,
                FlightsData^ key,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_sample,
                System::Object^ endpoint_plugin_qos) override;

            System::Boolean serialized_sample_to_key(
                TypePluginDefaultEndpointData^ endpoint_data,
                FlightsData^ sample,
                CdrStream% stream,
                System::Boolean deserialize_encapsulation,
                System::Boolean deserialize_key,
                System::Object^ endpoint_plugin_qos);

            // ---  Plug-in lifecycle management methods: --------------------------------
          public:
            static FlightsDataPlugin^ get_instance();

            static void dispose();

          private:
            FlightsDataPlugin()
            : DefaultTypePlugin(
                "FlightsData",

                false, // not keyed    
                false, // use RTPS-compliant alignment
                FlightsData::get_typecode() ) {
                // empty
            }

            static FlightsDataPlugin^ _singleton;
        };

    } /* namespace flights  */

} /* namespace airport  */

