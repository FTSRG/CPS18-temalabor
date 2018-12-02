/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from model.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#pragma once

#include "model.h"

class DDSDataWriter;
class DDSDataReader;

namespace metadata {
    namespace Source {
        // ---------------------------------------------------------------------------
        // SourceDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class SourceDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * SourceData.
        */
        public ref class SourceDataTypeSupport
        : public DDS::TypedTypeSupport<SourceData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "metadata::Source::SourceData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the SourceData type.
            */
            static SourceData^ create_data();

            /* If instances of the SourceData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(SourceData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(SourceData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                SourceData^ dst_data,
                SourceData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                SourceData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                SourceData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                SourceData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                SourceData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual SourceData^ create_data_untyped() override;

          public:
            static SourceDataTypeSupport^ get_instance();

            SourceDataTypeSupport();

          private:
            static SourceDataTypeSupport^ _singleton;
            SourceDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // SourceDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the SourceData type.
        */
        public ref class SourceDataDataReader :
        public DDS::TypedDataReader<SourceData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            SourceDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // SourceDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the SourceData user type.
        */
        public ref class SourceDataDataWriter :
        public DDS::TypedDataWriter<SourceData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            SourceDataDataWriter(System::IntPtr impl);
        };
    } /* namespace Source  */
    namespace Location {
        // ---------------------------------------------------------------------------
        // LocationDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class LocationDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * LocationData.
        */
        public ref class LocationDataTypeSupport
        : public DDS::TypedTypeSupport<LocationData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "metadata::Location::LocationData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the LocationData type.
            */
            static LocationData^ create_data();

            /* If instances of the LocationData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(LocationData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(LocationData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                LocationData^ dst_data,
                LocationData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                LocationData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                LocationData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                LocationData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                LocationData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual LocationData^ create_data_untyped() override;

          public:
            static LocationDataTypeSupport^ get_instance();

            LocationDataTypeSupport();

          private:
            static LocationDataTypeSupport^ _singleton;
            LocationDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // LocationDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the LocationData type.
        */
        public ref class LocationDataDataReader :
        public DDS::TypedDataReader<LocationData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            LocationDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // LocationDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the LocationData user type.
        */
        public ref class LocationDataDataWriter :
        public DDS::TypedDataWriter<LocationData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            LocationDataDataWriter(System::IntPtr impl);
        };
    } /* namespace Location  */
    namespace Metadata {
        // ---------------------------------------------------------------------------
        // MetadataTypeSupport
        // ---------------------------------------------------------------------------

        ref class MetadataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * Metadata.
        */
        public ref class MetadataTypeSupport
        : public DDS::TypedTypeSupport<Metadata^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "metadata::Metadata::Metadata";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the Metadata type.
            */
            static Metadata^ create_data();

            /* If instances of the Metadata type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(Metadata^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(Metadata^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                Metadata^ dst_data,
                Metadata^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                Metadata^ a_data);

            static void deserialize_data_from_cdr_buffer(
                Metadata^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                Metadata ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                Metadata ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual Metadata^ create_data_untyped() override;

          public:
            static MetadataTypeSupport^ get_instance();

            MetadataTypeSupport();

          private:
            static MetadataTypeSupport^ _singleton;
            MetadataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // MetadataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the Metadata type.
        */
        public ref class MetadataDataReader :
        public DDS::TypedDataReader<Metadata^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            MetadataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // MetadataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the Metadata user type.
        */
        public ref class MetadataDataWriter :
        public DDS::TypedDataWriter<Metadata^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            MetadataDataWriter(System::IntPtr impl);
        };
    } /* namespace Metadata  */
} /* namespace metadata  */
namespace weather {
    namespace MinimalWeather {
        // ---------------------------------------------------------------------------
        // MinimalWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class MinimalWeatherDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * MinimalWeatherData.
        */
        public ref class MinimalWeatherDataTypeSupport
        : public DDS::TypedTypeSupport<MinimalWeatherData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "weather::MinimalWeather::MinimalWeatherData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the MinimalWeatherData type.
            */
            static MinimalWeatherData^ create_data();

            /* If instances of the MinimalWeatherData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(MinimalWeatherData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(MinimalWeatherData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                MinimalWeatherData^ dst_data,
                MinimalWeatherData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                MinimalWeatherData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                MinimalWeatherData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                MinimalWeatherData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                MinimalWeatherData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual MinimalWeatherData^ create_data_untyped() override;

          public:
            static MinimalWeatherDataTypeSupport^ get_instance();

            MinimalWeatherDataTypeSupport();

          private:
            static MinimalWeatherDataTypeSupport^ _singleton;
            MinimalWeatherDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // MinimalWeatherDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the MinimalWeatherData type.
        */
        public ref class MinimalWeatherDataDataReader :
        public DDS::TypedDataReader<MinimalWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            MinimalWeatherDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // MinimalWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the MinimalWeatherData user type.
        */
        public ref class MinimalWeatherDataDataWriter :
        public DDS::TypedDataWriter<MinimalWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            MinimalWeatherDataDataWriter(System::IntPtr impl);
        };
    } /* namespace MinimalWeather  */
    namespace ExtendedWeather {
        // ---------------------------------------------------------------------------
        // ExtendedWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class ExtendedWeatherDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * ExtendedWeatherData.
        */
        public ref class ExtendedWeatherDataTypeSupport
        : public DDS::TypedTypeSupport<ExtendedWeatherData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "weather::ExtendedWeather::ExtendedWeatherData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the ExtendedWeatherData type.
            */
            static ExtendedWeatherData^ create_data();

            /* If instances of the ExtendedWeatherData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(ExtendedWeatherData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(ExtendedWeatherData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                ExtendedWeatherData^ dst_data,
                ExtendedWeatherData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                ExtendedWeatherData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                ExtendedWeatherData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                ExtendedWeatherData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                ExtendedWeatherData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual ExtendedWeatherData^ create_data_untyped() override;

          public:
            static ExtendedWeatherDataTypeSupport^ get_instance();

            ExtendedWeatherDataTypeSupport();

          private:
            static ExtendedWeatherDataTypeSupport^ _singleton;
            ExtendedWeatherDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // ExtendedWeatherDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the ExtendedWeatherData type.
        */
        public ref class ExtendedWeatherDataDataReader :
        public DDS::TypedDataReader<ExtendedWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            ExtendedWeatherDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // ExtendedWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the ExtendedWeatherData user type.
        */
        public ref class ExtendedWeatherDataDataWriter :
        public DDS::TypedDataWriter<ExtendedWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            ExtendedWeatherDataDataWriter(System::IntPtr impl);
        };
    } /* namespace ExtendedWeather  */
    namespace Cloud {
        // ---------------------------------------------------------------------------
        // CloudDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class CloudDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * CloudData.
        */
        public ref class CloudDataTypeSupport
        : public DDS::TypedTypeSupport<CloudData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "weather::Cloud::CloudData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the CloudData type.
            */
            static CloudData^ create_data();

            /* If instances of the CloudData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(CloudData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(CloudData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                CloudData^ dst_data,
                CloudData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                CloudData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                CloudData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                CloudData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                CloudData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual CloudData^ create_data_untyped() override;

          public:
            static CloudDataTypeSupport^ get_instance();

            CloudDataTypeSupport();

          private:
            static CloudDataTypeSupport^ _singleton;
            CloudDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // CloudDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the CloudData type.
        */
        public ref class CloudDataDataReader :
        public DDS::TypedDataReader<CloudData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            CloudDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // CloudDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the CloudData user type.
        */
        public ref class CloudDataDataWriter :
        public DDS::TypedDataWriter<CloudData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            CloudDataDataWriter(System::IntPtr impl);
        };
    } /* namespace Cloud  */
    namespace ForecastInputWeather {
        // ---------------------------------------------------------------------------
        // ForecastInputWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class ForecastInputWeatherDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * ForecastInputWeatherData.
        */
        public ref class ForecastInputWeatherDataTypeSupport
        : public DDS::TypedTypeSupport<ForecastInputWeatherData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "weather::ForecastInputWeather::ForecastInputWeatherData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the ForecastInputWeatherData type.
            */
            static ForecastInputWeatherData^ create_data();

            /* If instances of the ForecastInputWeatherData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(ForecastInputWeatherData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(ForecastInputWeatherData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                ForecastInputWeatherData^ dst_data,
                ForecastInputWeatherData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                ForecastInputWeatherData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                ForecastInputWeatherData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                ForecastInputWeatherData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                ForecastInputWeatherData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual ForecastInputWeatherData^ create_data_untyped() override;

          public:
            static ForecastInputWeatherDataTypeSupport^ get_instance();

            ForecastInputWeatherDataTypeSupport();

          private:
            static ForecastInputWeatherDataTypeSupport^ _singleton;
            ForecastInputWeatherDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // ForecastInputWeatherDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the ForecastInputWeatherData type.
        */
        public ref class ForecastInputWeatherDataDataReader :
        public DDS::TypedDataReader<ForecastInputWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            ForecastInputWeatherDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // ForecastInputWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the ForecastInputWeatherData user type.
        */
        public ref class ForecastInputWeatherDataDataWriter :
        public DDS::TypedDataWriter<ForecastInputWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            ForecastInputWeatherDataDataWriter(System::IntPtr impl);
        };
    } /* namespace ForecastInputWeather  */
    namespace AirportWeather {
        // ---------------------------------------------------------------------------
        // AirportWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class AirportWeatherDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * AirportWeatherData.
        */
        public ref class AirportWeatherDataTypeSupport
        : public DDS::TypedTypeSupport<AirportWeatherData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "weather::AirportWeather::AirportWeatherData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the AirportWeatherData type.
            */
            static AirportWeatherData^ create_data();

            /* If instances of the AirportWeatherData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(AirportWeatherData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(AirportWeatherData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                AirportWeatherData^ dst_data,
                AirportWeatherData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                AirportWeatherData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                AirportWeatherData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                AirportWeatherData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                AirportWeatherData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual AirportWeatherData^ create_data_untyped() override;

          public:
            static AirportWeatherDataTypeSupport^ get_instance();

            AirportWeatherDataTypeSupport();

          private:
            static AirportWeatherDataTypeSupport^ _singleton;
            AirportWeatherDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // AirportWeatherDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the AirportWeatherData type.
        */
        public ref class AirportWeatherDataDataReader :
        public DDS::TypedDataReader<AirportWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            AirportWeatherDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // AirportWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the AirportWeatherData user type.
        */
        public ref class AirportWeatherDataDataWriter :
        public DDS::TypedDataWriter<AirportWeatherData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            AirportWeatherDataDataWriter(System::IntPtr impl);
        };
    } /* namespace AirportWeather  */
} /* namespace weather  */
namespace airport {
    namespace flights {
        // ---------------------------------------------------------------------------
        // FlightsDataTypeSupport
        // ---------------------------------------------------------------------------

        ref class FlightsDataPlugin;

        /* A collection of useful methods for dealing with objects of type
        * FlightsData.
        */
        public ref class FlightsDataTypeSupport
        : public DDS::TypedTypeSupport<FlightsData^> {
            // --- Type name: --------------------------------------------------------
          public:
            static System::String^ TYPENAME = "airport::flights::FlightsData";

            // --- Public Methods: ---------------------------------------------------
          public:
            /* Get the default name of this type.
            *
            * An application can choose to register a type under any name, so
            * calling this method is strictly optional.
            */
            static System::String^ get_type_name();

            /* Register this type with the given participant under the given logical
            * name. This type must be registered before a Topic can be created that
            * uses it.
            */
            static void register_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Unregister this type from the given participant, where it was
            * previously registered under the given name. No further Topic creation
            * using this type will be possible.
            *
            * Unregistration allows some middleware resources to be reclaimed.
            */
            static void unregister_type(
                DDS::DomainParticipant^ participant,
                System::String^ type_name);

            /* Create an instance of the FlightsData type.
            */
            static FlightsData^ create_data();

            /* If instances of the FlightsData type require any
            * explicit finalization, perform it now on the given sample.
            */
            static void delete_data(FlightsData^ data);

            /* Write the contents of the data sample to standard out.
            */
            static void print_data(FlightsData^ a_data);

            /* Perform a deep copy of the contents of one data sample over those of
            * another, overwriting it.
            */
            static void copy_data(
                FlightsData^ dst_data,
                FlightsData^ src_data);

            static void serialize_data_to_cdr_buffer(
                array<System::Byte>^ buffer,
                System::UInt32% length,
                FlightsData^ a_data);

            static void deserialize_data_from_cdr_buffer(
                FlightsData^ a_data,
                array<System::Byte>^ buffer,
                System::UInt32 length);

            static System::String^ data_to_string(
                FlightsData ^sample,
                PrintFormatProperty ^property);

            static System::String^ data_to_string(
                FlightsData ^sample);

            static DDS::TypeCode^ get_typecode();

            // --- Implementation: ---------------------------------------------------
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
          public:
            virtual System::String^ get_type_name_untyped() override;
            virtual DDS::DataReader^ create_datareaderI(
                System::IntPtr impl) override;
            virtual DDS::DataWriter^ create_datawriterI(
                System::IntPtr impl) override;

            virtual FlightsData^ create_data_untyped() override;

          public:
            static FlightsDataTypeSupport^ get_instance();

            FlightsDataTypeSupport();

          private:
            static FlightsDataTypeSupport^ _singleton;
            FlightsDataPlugin^ _type_plugin;
        };

        // ---------------------------------------------------------------------------
        // FlightsDataDataReader
        // ---------------------------------------------------------------------------

        /**
        * A reader for the FlightsData type.
        */
        public ref class FlightsDataDataReader :
        public DDS::TypedDataReader<FlightsData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            FlightsDataDataReader(System::IntPtr impl);
        };

        // ---------------------------------------------------------------------------
        // FlightsDataDataWriter
        // ---------------------------------------------------------------------------

        /**
        * A writer for the FlightsData user type.
        */
        public ref class FlightsDataDataWriter :
        public DDS::TypedDataWriter<FlightsData^> {
            /* The following code is for the use of the middleware infrastructure.
            * Applications are not expected to call it directly.
            */
            internal:
            FlightsDataDataWriter(System::IntPtr impl);
        };
    } /* namespace flights  */
} /* namespace airport  */
