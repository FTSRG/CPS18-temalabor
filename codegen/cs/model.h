
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from model.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#pragma once

struct DDS_TypeCode;

using namespace System;
using namespace DDS;

namespace metadata {

    namespace Source {

        public ref struct SourceData
        :  public DDS::ICopyable<SourceData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::String^ name;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            SourceData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear() ;

            virtual System::Boolean copy_from(SourceData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class SourceData

        public ref class SourceDataSeq sealed
        : public DDS::UserRefSequence<SourceData^> {
          public:
            SourceDataSeq() :
                DDS::UserRefSequence<SourceData^>() {
                    // empty
            }
            SourceDataSeq(System::Int32 max) :
                DDS::UserRefSequence<SourceData^>(max) {
                    // empty
            }
            SourceDataSeq(SourceDataSeq^ src) :
                DDS::UserRefSequence<SourceData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* SourceData_get_typecode();

    } /* namespace Source  */

    namespace Location {

        public ref struct LocationData
        :  public DDS::ICopyable<LocationData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::String^ name;
            System::Double latitude;
            System::Double longitude;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            LocationData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear() ;

            virtual System::Boolean copy_from(LocationData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class LocationData

        public ref class LocationDataSeq sealed
        : public DDS::UserRefSequence<LocationData^> {
          public:
            LocationDataSeq() :
                DDS::UserRefSequence<LocationData^>() {
                    // empty
            }
            LocationDataSeq(System::Int32 max) :
                DDS::UserRefSequence<LocationData^>(max) {
                    // empty
            }
            LocationDataSeq(LocationDataSeq^ src) :
                DDS::UserRefSequence<LocationData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* LocationData_get_typecode();

    } /* namespace Location  */

    namespace Metadata {

        public ref struct Metadata
        :  public DDS::ICopyable<Metadata^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::Int32 timestamp;
            metadata::Location::LocationData^ location;
            metadata::Source::SourceData^ source;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            Metadata();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear() ;

            virtual System::Boolean copy_from(Metadata^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class Metadata

        public ref class MetadataSeq sealed
        : public DDS::UserRefSequence<Metadata^> {
          public:
            MetadataSeq() :
                DDS::UserRefSequence<Metadata^>() {
                    // empty
            }
            MetadataSeq(System::Int32 max) :
                DDS::UserRefSequence<Metadata^>(max) {
                    // empty
            }
            MetadataSeq(MetadataSeq^ src) :
                DDS::UserRefSequence<Metadata^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* Metadata_get_typecode();

    } /* namespace Metadata  */

} /* namespace metadata  */

namespace weather {

    namespace MinimalWeather {

        public ref struct MinimalWeatherData
        :  public DDS::ICopyable<MinimalWeatherData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::Double Temerature;
            System::Double Humidity;
            metadata::Metadata^ metadata;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            MinimalWeatherData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear() ;

            virtual System::Boolean copy_from(MinimalWeatherData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class MinimalWeatherData

        public ref class MinimalWeatherDataSeq sealed
        : public DDS::UserRefSequence<MinimalWeatherData^> {
          public:
            MinimalWeatherDataSeq() :
                DDS::UserRefSequence<MinimalWeatherData^>() {
                    // empty
            }
            MinimalWeatherDataSeq(System::Int32 max) :
                DDS::UserRefSequence<MinimalWeatherData^>(max) {
                    // empty
            }
            MinimalWeatherDataSeq(MinimalWeatherDataSeq^ src) :
                DDS::UserRefSequence<MinimalWeatherData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* MinimalWeatherData_get_typecode();

    } /* namespace MinimalWeather  */

    namespace ExtendedWeather {

        public ref struct ExtendedWeatherData
        :  public weather::MinimalWeather::MinimalWeatherData, public DDS::ICopyable<ExtendedWeatherData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::Double Pressure;
            System::Double WindDirection;
            System::Double WindSpeed;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            ExtendedWeatherData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear()  override ;

            virtual System::Boolean copy_from(ExtendedWeatherData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class ExtendedWeatherData

        public ref class ExtendedWeatherDataSeq sealed
        : public DDS::UserRefSequence<ExtendedWeatherData^> {
          public:
            ExtendedWeatherDataSeq() :
                DDS::UserRefSequence<ExtendedWeatherData^>() {
                    // empty
            }
            ExtendedWeatherDataSeq(System::Int32 max) :
                DDS::UserRefSequence<ExtendedWeatherData^>(max) {
                    // empty
            }
            ExtendedWeatherDataSeq(ExtendedWeatherDataSeq^ src) :
                DDS::UserRefSequence<ExtendedWeatherData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* ExtendedWeatherData_get_typecode();

    } /* namespace ExtendedWeather  */

    namespace Cloud {

        public ref struct CloudData
        :  public DDS::ICopyable<CloudData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::Int16 Value;
            System::String^ description;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            CloudData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear() ;

            virtual System::Boolean copy_from(CloudData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class CloudData

        public ref class CloudDataSeq sealed
        : public DDS::UserRefSequence<CloudData^> {
          public:
            CloudDataSeq() :
                DDS::UserRefSequence<CloudData^>() {
                    // empty
            }
            CloudDataSeq(System::Int32 max) :
                DDS::UserRefSequence<CloudData^>(max) {
                    // empty
            }
            CloudDataSeq(CloudDataSeq^ src) :
                DDS::UserRefSequence<CloudData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* CloudData_get_typecode();

    } /* namespace Cloud  */

    namespace ForecastInputWeather {

        public ref struct ForecastInputWeatherData
        :  public weather::ExtendedWeather::ExtendedWeatherData, public DDS::ICopyable<ForecastInputWeatherData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::Double SeaLevelPressure;
            System::String^ Phenomena;
            weather::Cloud::CloudData^ cloud;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            ForecastInputWeatherData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear()  override ;

            virtual System::Boolean copy_from(ForecastInputWeatherData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class ForecastInputWeatherData

        public ref class ForecastInputWeatherDataSeq sealed
        : public DDS::UserRefSequence<ForecastInputWeatherData^> {
          public:
            ForecastInputWeatherDataSeq() :
                DDS::UserRefSequence<ForecastInputWeatherData^>() {
                    // empty
            }
            ForecastInputWeatherDataSeq(System::Int32 max) :
                DDS::UserRefSequence<ForecastInputWeatherData^>(max) {
                    // empty
            }
            ForecastInputWeatherDataSeq(ForecastInputWeatherDataSeq^ src) :
                DDS::UserRefSequence<ForecastInputWeatherData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* ForecastInputWeatherData_get_typecode();

    } /* namespace ForecastInputWeather  */

    namespace AirportWeather {

        public ref struct AirportWeatherData
        :  public weather::ExtendedWeather::ExtendedWeatherData, public DDS::ICopyable<AirportWeatherData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            System::Double WindGust;
            System::Double WindDirChange;
            System::Double WindDirChange1;
            System::Double DewPoint;
            System::Double ViewDistance;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            AirportWeatherData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear()  override ;

            virtual System::Boolean copy_from(AirportWeatherData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class AirportWeatherData

        public ref class AirportWeatherDataSeq sealed
        : public DDS::UserRefSequence<AirportWeatherData^> {
          public:
            AirportWeatherDataSeq() :
                DDS::UserRefSequence<AirportWeatherData^>() {
                    // empty
            }
            AirportWeatherDataSeq(System::Int32 max) :
                DDS::UserRefSequence<AirportWeatherData^>(max) {
                    // empty
            }
            AirportWeatherDataSeq(AirportWeatherDataSeq^ src) :
                DDS::UserRefSequence<AirportWeatherData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* AirportWeatherData_get_typecode();

    } /* namespace AirportWeather  */

} /* namespace weather  */

namespace airport {

    namespace flights {

        public ref struct FlightsData
        :  public DDS::ICopyable<FlightsData^> {
            // --- Declared members: -------------------------------------------------
          public: 

            metadata::Metadata::Metadata^ metadata;
            System::Int32 id;
            System::String^ originAirport;
            System::String^ destinationAirport;
            System::Int32 weatherDelay;

            // --- Static constants: -------------------------------------    
          public:

            // --- Constructors and destructors: -------------------------------------
          public:
            FlightsData();

            // --- Utility methods: --------------------------------------------------
          public:

            virtual void clear() ;

            virtual System::Boolean copy_from(FlightsData^ src);

            virtual System::Boolean Equals(System::Object^ other) override;
            static DDS::TypeCode^ get_typecode();

          private:
            static DDS::TypeCode^ _typecode;

        }; // class FlightsData

        public ref class FlightsDataSeq sealed
        : public DDS::UserRefSequence<FlightsData^> {
          public:
            FlightsDataSeq() :
                DDS::UserRefSequence<FlightsData^>() {
                    // empty
            }
            FlightsDataSeq(System::Int32 max) :
                DDS::UserRefSequence<FlightsData^>(max) {
                    // empty
            }
            FlightsDataSeq(FlightsDataSeq^ src) :
                DDS::UserRefSequence<FlightsData^>(src) {
                    // empty
            }
        };

        #define NDDSUSERDllExport

        NDDSUSERDllExport DDS_TypeCode* FlightsData_get_typecode();

    } /* namespace flights  */

} /* namespace airport  */

