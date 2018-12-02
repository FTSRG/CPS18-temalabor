/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from model.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "modelSupport.h"
#include "modelPlugin.h"

#pragma unmanaged
#include "ndds/ndds_cpp.h"
#pragma managed

using namespace System;
using namespace DDS;

namespace metadata {
    namespace Source {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // SourceDataDataWriter
        // ---------------------------------------------------------------------------

        SourceDataDataWriter::SourceDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<SourceData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // SourceDataDataReader
        // ---------------------------------------------------------------------------

        SourceDataDataReader::SourceDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<SourceData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // SourceDataTypeSupport
        // ---------------------------------------------------------------------------

        SourceDataTypeSupport::SourceDataTypeSupport()
        : DDS::TypedTypeSupport<SourceData^>(
            SourceDataPlugin::get_instance()) {

            _type_plugin = SourceDataPlugin::get_instance();
        }

        void SourceDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void SourceDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        SourceData^ SourceDataTypeSupport::create_data() {
            return gcnew SourceData();
        }

        SourceData^ SourceDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void SourceDataTypeSupport::delete_data(
            SourceData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void SourceDataTypeSupport::print_data(SourceData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void SourceDataTypeSupport::copy_data(
            SourceData^ dst, SourceData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void SourceDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            SourceData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void SourceDataTypeSupport::deserialize_data_from_cdr_buffer(
            SourceData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ SourceDataTypeSupport::data_to_string(
            SourceData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ SourceDataTypeSupport::data_to_string(
            SourceData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ SourceDataTypeSupport::get_typecode() {
            return  SourceData::get_typecode();
        }

        System::String^ SourceDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ SourceDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ SourceDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew SourceDataDataReader(impl);
        }

        DDS::DataWriter^ SourceDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew SourceDataDataWriter(impl);
        }

        SourceDataTypeSupport^
        SourceDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew SourceDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace Source  */
    namespace Location {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // LocationDataDataWriter
        // ---------------------------------------------------------------------------

        LocationDataDataWriter::LocationDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<LocationData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // LocationDataDataReader
        // ---------------------------------------------------------------------------

        LocationDataDataReader::LocationDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<LocationData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // LocationDataTypeSupport
        // ---------------------------------------------------------------------------

        LocationDataTypeSupport::LocationDataTypeSupport()
        : DDS::TypedTypeSupport<LocationData^>(
            LocationDataPlugin::get_instance()) {

            _type_plugin = LocationDataPlugin::get_instance();
        }

        void LocationDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void LocationDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        LocationData^ LocationDataTypeSupport::create_data() {
            return gcnew LocationData();
        }

        LocationData^ LocationDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void LocationDataTypeSupport::delete_data(
            LocationData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void LocationDataTypeSupport::print_data(LocationData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void LocationDataTypeSupport::copy_data(
            LocationData^ dst, LocationData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void LocationDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            LocationData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void LocationDataTypeSupport::deserialize_data_from_cdr_buffer(
            LocationData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ LocationDataTypeSupport::data_to_string(
            LocationData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ LocationDataTypeSupport::data_to_string(
            LocationData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ LocationDataTypeSupport::get_typecode() {
            return  LocationData::get_typecode();
        }

        System::String^ LocationDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ LocationDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ LocationDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew LocationDataDataReader(impl);
        }

        DDS::DataWriter^ LocationDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew LocationDataDataWriter(impl);
        }

        LocationDataTypeSupport^
        LocationDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew LocationDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace Location  */
    namespace Metadata {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // MetadataDataWriter
        // ---------------------------------------------------------------------------

        MetadataDataWriter::MetadataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<Metadata^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // MetadataDataReader
        // ---------------------------------------------------------------------------

        MetadataDataReader::MetadataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<Metadata^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // MetadataTypeSupport
        // ---------------------------------------------------------------------------

        MetadataTypeSupport::MetadataTypeSupport()
        : DDS::TypedTypeSupport<Metadata^>(
            MetadataPlugin::get_instance()) {

            _type_plugin = MetadataPlugin::get_instance();
        }

        void MetadataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void MetadataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        Metadata^ MetadataTypeSupport::create_data() {
            return gcnew Metadata();
        }

        Metadata^ MetadataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void MetadataTypeSupport::delete_data(
            Metadata^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void MetadataTypeSupport::print_data(Metadata^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void MetadataTypeSupport::copy_data(
            Metadata^ dst, Metadata^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void MetadataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            Metadata^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void MetadataTypeSupport::deserialize_data_from_cdr_buffer(
            Metadata^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ MetadataTypeSupport::data_to_string(
            Metadata ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ MetadataTypeSupport::data_to_string(
            Metadata ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ MetadataTypeSupport::get_typecode() {
            return  Metadata::get_typecode();
        }

        System::String^ MetadataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ MetadataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ MetadataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew MetadataDataReader(impl);
        }

        DDS::DataWriter^ MetadataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew MetadataDataWriter(impl);
        }

        MetadataTypeSupport^
        MetadataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew MetadataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace Metadata  */
} /* namespace metadata  */
namespace weather {
    namespace MinimalWeather {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // MinimalWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        MinimalWeatherDataDataWriter::MinimalWeatherDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<MinimalWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // MinimalWeatherDataDataReader
        // ---------------------------------------------------------------------------

        MinimalWeatherDataDataReader::MinimalWeatherDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<MinimalWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // MinimalWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        MinimalWeatherDataTypeSupport::MinimalWeatherDataTypeSupport()
        : DDS::TypedTypeSupport<MinimalWeatherData^>(
            MinimalWeatherDataPlugin::get_instance()) {

            _type_plugin = MinimalWeatherDataPlugin::get_instance();
        }

        void MinimalWeatherDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void MinimalWeatherDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        MinimalWeatherData^ MinimalWeatherDataTypeSupport::create_data() {
            return gcnew MinimalWeatherData();
        }

        MinimalWeatherData^ MinimalWeatherDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void MinimalWeatherDataTypeSupport::delete_data(
            MinimalWeatherData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void MinimalWeatherDataTypeSupport::print_data(MinimalWeatherData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void MinimalWeatherDataTypeSupport::copy_data(
            MinimalWeatherData^ dst, MinimalWeatherData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void MinimalWeatherDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            MinimalWeatherData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void MinimalWeatherDataTypeSupport::deserialize_data_from_cdr_buffer(
            MinimalWeatherData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ MinimalWeatherDataTypeSupport::data_to_string(
            MinimalWeatherData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ MinimalWeatherDataTypeSupport::data_to_string(
            MinimalWeatherData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ MinimalWeatherDataTypeSupport::get_typecode() {
            return  MinimalWeatherData::get_typecode();
        }

        System::String^ MinimalWeatherDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ MinimalWeatherDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ MinimalWeatherDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew MinimalWeatherDataDataReader(impl);
        }

        DDS::DataWriter^ MinimalWeatherDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew MinimalWeatherDataDataWriter(impl);
        }

        MinimalWeatherDataTypeSupport^
        MinimalWeatherDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew MinimalWeatherDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace MinimalWeather  */
    namespace ExtendedWeather {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // ExtendedWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        ExtendedWeatherDataDataWriter::ExtendedWeatherDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<ExtendedWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // ExtendedWeatherDataDataReader
        // ---------------------------------------------------------------------------

        ExtendedWeatherDataDataReader::ExtendedWeatherDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<ExtendedWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // ExtendedWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        ExtendedWeatherDataTypeSupport::ExtendedWeatherDataTypeSupport()
        : DDS::TypedTypeSupport<ExtendedWeatherData^>(
            ExtendedWeatherDataPlugin::get_instance()) {

            _type_plugin = ExtendedWeatherDataPlugin::get_instance();
        }

        void ExtendedWeatherDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void ExtendedWeatherDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        ExtendedWeatherData^ ExtendedWeatherDataTypeSupport::create_data() {
            return gcnew ExtendedWeatherData();
        }

        ExtendedWeatherData^ ExtendedWeatherDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void ExtendedWeatherDataTypeSupport::delete_data(
            ExtendedWeatherData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void ExtendedWeatherDataTypeSupport::print_data(ExtendedWeatherData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void ExtendedWeatherDataTypeSupport::copy_data(
            ExtendedWeatherData^ dst, ExtendedWeatherData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void ExtendedWeatherDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            ExtendedWeatherData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void ExtendedWeatherDataTypeSupport::deserialize_data_from_cdr_buffer(
            ExtendedWeatherData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ ExtendedWeatherDataTypeSupport::data_to_string(
            ExtendedWeatherData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ ExtendedWeatherDataTypeSupport::data_to_string(
            ExtendedWeatherData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ ExtendedWeatherDataTypeSupport::get_typecode() {
            return  ExtendedWeatherData::get_typecode();
        }

        System::String^ ExtendedWeatherDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ ExtendedWeatherDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ ExtendedWeatherDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew ExtendedWeatherDataDataReader(impl);
        }

        DDS::DataWriter^ ExtendedWeatherDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew ExtendedWeatherDataDataWriter(impl);
        }

        ExtendedWeatherDataTypeSupport^
        ExtendedWeatherDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew ExtendedWeatherDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace ExtendedWeather  */
    namespace Cloud {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // CloudDataDataWriter
        // ---------------------------------------------------------------------------

        CloudDataDataWriter::CloudDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<CloudData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // CloudDataDataReader
        // ---------------------------------------------------------------------------

        CloudDataDataReader::CloudDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<CloudData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // CloudDataTypeSupport
        // ---------------------------------------------------------------------------

        CloudDataTypeSupport::CloudDataTypeSupport()
        : DDS::TypedTypeSupport<CloudData^>(
            CloudDataPlugin::get_instance()) {

            _type_plugin = CloudDataPlugin::get_instance();
        }

        void CloudDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void CloudDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        CloudData^ CloudDataTypeSupport::create_data() {
            return gcnew CloudData();
        }

        CloudData^ CloudDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void CloudDataTypeSupport::delete_data(
            CloudData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void CloudDataTypeSupport::print_data(CloudData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void CloudDataTypeSupport::copy_data(
            CloudData^ dst, CloudData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void CloudDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            CloudData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void CloudDataTypeSupport::deserialize_data_from_cdr_buffer(
            CloudData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ CloudDataTypeSupport::data_to_string(
            CloudData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ CloudDataTypeSupport::data_to_string(
            CloudData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ CloudDataTypeSupport::get_typecode() {
            return  CloudData::get_typecode();
        }

        System::String^ CloudDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ CloudDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ CloudDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew CloudDataDataReader(impl);
        }

        DDS::DataWriter^ CloudDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew CloudDataDataWriter(impl);
        }

        CloudDataTypeSupport^
        CloudDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew CloudDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace Cloud  */
    namespace ForecastInputWeather {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // ForecastInputWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        ForecastInputWeatherDataDataWriter::ForecastInputWeatherDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<ForecastInputWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // ForecastInputWeatherDataDataReader
        // ---------------------------------------------------------------------------

        ForecastInputWeatherDataDataReader::ForecastInputWeatherDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<ForecastInputWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // ForecastInputWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        ForecastInputWeatherDataTypeSupport::ForecastInputWeatherDataTypeSupport()
        : DDS::TypedTypeSupport<ForecastInputWeatherData^>(
            ForecastInputWeatherDataPlugin::get_instance()) {

            _type_plugin = ForecastInputWeatherDataPlugin::get_instance();
        }

        void ForecastInputWeatherDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void ForecastInputWeatherDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        ForecastInputWeatherData^ ForecastInputWeatherDataTypeSupport::create_data() {
            return gcnew ForecastInputWeatherData();
        }

        ForecastInputWeatherData^ ForecastInputWeatherDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void ForecastInputWeatherDataTypeSupport::delete_data(
            ForecastInputWeatherData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void ForecastInputWeatherDataTypeSupport::print_data(ForecastInputWeatherData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void ForecastInputWeatherDataTypeSupport::copy_data(
            ForecastInputWeatherData^ dst, ForecastInputWeatherData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void ForecastInputWeatherDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            ForecastInputWeatherData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void ForecastInputWeatherDataTypeSupport::deserialize_data_from_cdr_buffer(
            ForecastInputWeatherData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ ForecastInputWeatherDataTypeSupport::data_to_string(
            ForecastInputWeatherData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ ForecastInputWeatherDataTypeSupport::data_to_string(
            ForecastInputWeatherData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ ForecastInputWeatherDataTypeSupport::get_typecode() {
            return  ForecastInputWeatherData::get_typecode();
        }

        System::String^ ForecastInputWeatherDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ ForecastInputWeatherDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ ForecastInputWeatherDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew ForecastInputWeatherDataDataReader(impl);
        }

        DDS::DataWriter^ ForecastInputWeatherDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew ForecastInputWeatherDataDataWriter(impl);
        }

        ForecastInputWeatherDataTypeSupport^
        ForecastInputWeatherDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew ForecastInputWeatherDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace ForecastInputWeather  */
    namespace AirportWeather {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // AirportWeatherDataDataWriter
        // ---------------------------------------------------------------------------

        AirportWeatherDataDataWriter::AirportWeatherDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<AirportWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // AirportWeatherDataDataReader
        // ---------------------------------------------------------------------------

        AirportWeatherDataDataReader::AirportWeatherDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<AirportWeatherData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // AirportWeatherDataTypeSupport
        // ---------------------------------------------------------------------------

        AirportWeatherDataTypeSupport::AirportWeatherDataTypeSupport()
        : DDS::TypedTypeSupport<AirportWeatherData^>(
            AirportWeatherDataPlugin::get_instance()) {

            _type_plugin = AirportWeatherDataPlugin::get_instance();
        }

        void AirportWeatherDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void AirportWeatherDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        AirportWeatherData^ AirportWeatherDataTypeSupport::create_data() {
            return gcnew AirportWeatherData();
        }

        AirportWeatherData^ AirportWeatherDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void AirportWeatherDataTypeSupport::delete_data(
            AirportWeatherData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void AirportWeatherDataTypeSupport::print_data(AirportWeatherData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void AirportWeatherDataTypeSupport::copy_data(
            AirportWeatherData^ dst, AirportWeatherData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void AirportWeatherDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            AirportWeatherData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void AirportWeatherDataTypeSupport::deserialize_data_from_cdr_buffer(
            AirportWeatherData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ AirportWeatherDataTypeSupport::data_to_string(
            AirportWeatherData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ AirportWeatherDataTypeSupport::data_to_string(
            AirportWeatherData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ AirportWeatherDataTypeSupport::get_typecode() {
            return  AirportWeatherData::get_typecode();
        }

        System::String^ AirportWeatherDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ AirportWeatherDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ AirportWeatherDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew AirportWeatherDataDataReader(impl);
        }

        DDS::DataWriter^ AirportWeatherDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew AirportWeatherDataDataWriter(impl);
        }

        AirportWeatherDataTypeSupport^
        AirportWeatherDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew AirportWeatherDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace AirportWeather  */
} /* namespace weather  */
namespace airport {
    namespace flights {

        /* ========================================================================= */

        // ---------------------------------------------------------------------------
        // FlightsDataDataWriter
        // ---------------------------------------------------------------------------

        FlightsDataDataWriter::FlightsDataDataWriter(
            System::IntPtr impl) : DDS::TypedDataWriter<FlightsData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // FlightsDataDataReader
        // ---------------------------------------------------------------------------

        FlightsDataDataReader::FlightsDataDataReader(
            System::IntPtr impl) : DDS::TypedDataReader<FlightsData^>(impl) {
            // empty
        }

        // ---------------------------------------------------------------------------
        // FlightsDataTypeSupport
        // ---------------------------------------------------------------------------

        FlightsDataTypeSupport::FlightsDataTypeSupport()
        : DDS::TypedTypeSupport<FlightsData^>(
            FlightsDataPlugin::get_instance()) {

            _type_plugin = FlightsDataPlugin::get_instance();
        }

        void FlightsDataTypeSupport::register_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->register_type_untyped(participant, type_name);
        }

        void FlightsDataTypeSupport::unregister_type(
            DDS::DomainParticipant^ participant,
            System::String^ type_name) {

            get_instance()->unregister_type_untyped(participant, type_name);
        }

        FlightsData^ FlightsDataTypeSupport::create_data() {
            return gcnew FlightsData();
        }

        FlightsData^ FlightsDataTypeSupport::create_data_untyped() {
            return create_data();
        }

        void FlightsDataTypeSupport::delete_data(
            FlightsData^ a_data) {
            /* If the generated type does not implement IDisposable (the default),
            * the following will no a no-op.
            */
            delete a_data;
        }

        void FlightsDataTypeSupport::print_data(FlightsData^ a_data) {
            get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
        }

        void FlightsDataTypeSupport::copy_data(
            FlightsData^ dst, FlightsData^ src) {

            get_instance()->copy_data_untyped(dst, src);
        }

        void FlightsDataTypeSupport::serialize_data_to_cdr_buffer(
            array<System::Byte>^ buffer,
            System::UInt32% length,
            FlightsData^ a_data)
        {
            if (!get_instance()->_type_plugin->serialize_to_cdr_buffer(buffer,length,a_data)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        void FlightsDataTypeSupport::deserialize_data_from_cdr_buffer(
            FlightsData^ a_data,
            array<System::Byte>^ buffer,
            System::UInt32 length)
        {
            if (!get_instance()->_type_plugin->deserialize_from_cdr_buffer(a_data,buffer,length)) {
                throw gcnew Retcode_Error(DDS_RETCODE_ERROR);
            }
        }

        System::String^ FlightsDataTypeSupport::data_to_string(
            FlightsData ^sample, 
            PrintFormatProperty ^formatProperty)
        {
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        System::String^ FlightsDataTypeSupport::data_to_string(
            FlightsData ^sample)
        {
            PrintFormatProperty ^formatProperty = gcnew PrintFormatProperty();
            return get_instance()->_type_plugin->data_to_string(
                sample, 
                formatProperty);
        }

        DDS::TypeCode^ FlightsDataTypeSupport::get_typecode() {
            return  FlightsData::get_typecode();
        }

        System::String^ FlightsDataTypeSupport::get_type_name() {
            return TYPENAME;
        }

        System::String^ FlightsDataTypeSupport::get_type_name_untyped() {
            return TYPENAME;
        }

        DDS::DataReader^ FlightsDataTypeSupport::create_datareaderI(
            System::IntPtr impl) {

            return gcnew FlightsDataDataReader(impl);
        }

        DDS::DataWriter^ FlightsDataTypeSupport::create_datawriterI(
            System::IntPtr impl) {

            return gcnew FlightsDataDataWriter(impl);
        }

        FlightsDataTypeSupport^
        FlightsDataTypeSupport::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew FlightsDataTypeSupport();
            }
            return _singleton;
        }
    } /* namespace flights  */
} /* namespace airport  */
