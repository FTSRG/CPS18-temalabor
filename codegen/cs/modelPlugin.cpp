/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from model.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "modelPlugin.h"

#pragma unmanaged
#include "ndds/ndds_cpp.h"
#include "osapi/osapi_utility.h"
#pragma managed

using namespace System::Runtime::InteropServices;

namespace metadata {
    namespace Source {

        /* ------------------------------------------------------------------------
        *  Type SourceData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        SourceDataPlugin::print_data(
            SourceData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            DataPrintUtility::print_object(
                sample->name, "name", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        SourceDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            SourceData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {

                if (!stream.serialize_string(sample->name  , (60))) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        SourceDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            SourceData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                try{

                    sample->name = stream.deserialize_string( (60));
                    if (sample->name  == nullptr) {
                        return false;
                    }

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        SourceDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!stream.skip_string((60))) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        SourceDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment , (60)+1);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        SourceDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment, 1);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        SourceDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            SourceData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += CdrSizes::STRING->serialized_size(
                endpoint_data->get_alignment(current_alignment), sample->name);
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        SourceDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        SourceDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            SourceData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean SourceDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            SourceData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        SourceDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            SourceData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        SourceDataPlugin^
        SourceDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew SourceDataPlugin();
            }
            return _singleton;
        }

        void
        SourceDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace Source  */
    namespace Location {

        /* ------------------------------------------------------------------------
        *  Type LocationData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        LocationDataPlugin::print_data(
            LocationData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            DataPrintUtility::print_object(
                sample->name, "name", indent_level);

            DataPrintUtility::print_object(
                sample->latitude, "latitude", indent_level);

            DataPrintUtility::print_object(
                sample->longitude, "longitude", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        LocationDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            LocationData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {

                if (!stream.serialize_string(sample->name  , (60))) {
                    return false;
                }
                if (!stream.serialize_double(sample->latitude )) {
                    return false;
                }
                if (!stream.serialize_double(sample->longitude )) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        LocationDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            LocationData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                try{

                    sample->name = stream.deserialize_string( (60));
                    if (sample->name  == nullptr) {
                        return false;
                    }
                    sample->latitude = stream.deserialize_double();
                    sample->longitude = stream.deserialize_double();

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        LocationDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!stream.skip_string((60))) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        LocationDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment , (60)+1);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        LocationDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment, 1);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        LocationDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            LocationData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += CdrSizes::STRING->serialized_size(
                endpoint_data->get_alignment(current_alignment), sample->name);

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        LocationDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        LocationDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            LocationData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean LocationDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            LocationData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        LocationDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            LocationData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        LocationDataPlugin^
        LocationDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew LocationDataPlugin();
            }
            return _singleton;
        }

        void
        LocationDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace Location  */
    namespace Metadata {

        /* ------------------------------------------------------------------------
        *  Type Metadata
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        MetadataPlugin::print_data(
            Metadata^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            DataPrintUtility::print_object(
                sample->timestamp, "timestamp", indent_level);

            DataPrintUtility::print_object(
                sample->location, "location", indent_level);

            DataPrintUtility::print_object(
                sample->source, "source", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        MetadataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            Metadata^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {

                if (!stream.serialize_long(sample->timestamp )) {
                    return false;
                }
                if (!metadata::Location::LocationDataPlugin::get_instance()->serialize(
                    endpoint_data,
                    sample->location,
                    stream,
                    false, // serialize encapsulation header
                    encapsulation_id,
                    true,  // serialize data
                    endpoint_plugin_qos)) {
                    return false;
                }
                if (!metadata::Source::SourceDataPlugin::get_instance()->serialize(
                    endpoint_data,
                    sample->source,
                    stream,
                    false, // serialize encapsulation header
                    encapsulation_id,
                    true,  // serialize data
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        MetadataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            Metadata^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                try{

                    sample->timestamp = stream.deserialize_long();
                    if (!metadata::Location::LocationDataPlugin::get_instance()->deserialize_sample(
                        endpoint_data,
                        sample->location,
                        stream,
                        false, // deserialize encapsulation header
                        true,  // deserialize data
                        endpoint_plugin_qos)) {
                        return false;
                    }
                    if (!metadata::Source::SourceDataPlugin::get_instance()->deserialize_sample(
                        endpoint_data,
                        sample->source,
                        stream,
                        false, // deserialize encapsulation header
                        true,  // deserialize data
                        endpoint_plugin_qos)) {
                        return false;
                    }

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        MetadataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!stream.skip_long()) {
                    return false;
                }
                if (!metadata::Location::LocationDataPlugin::get_instance()->skip(
                    endpoint_data,
                    stream, 
                    false, true, 
                    endpoint_plugin_qos)) {
                    return false;
                }
                if (!metadata::Source::SourceDataPlugin::get_instance()->skip(
                    endpoint_data,
                    stream, 
                    false, true, 
                    endpoint_plugin_qos)) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        MetadataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::LONG->serialized_size(
                current_alignment );

            current_alignment +=  metadata::Location::LocationDataPlugin::get_instance()->get_serialized_sample_max_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            current_alignment +=  metadata::Source::SourceDataPlugin::get_instance()->get_serialized_sample_max_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        MetadataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::LONG->serialized_size(
                current_alignment);
            current_alignment +=  metadata::Location::LocationDataPlugin::get_instance()->get_serialized_sample_min_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            current_alignment +=  metadata::Source::SourceDataPlugin::get_instance()->get_serialized_sample_min_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        MetadataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            Metadata^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += CdrSizes::LONG->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += metadata::Location::LocationDataPlugin::get_instance()->get_serialized_sample_size(
                endpoint_data, false, encapsulation_id, current_alignment, sample->location);

            current_alignment += metadata::Source::SourceDataPlugin::get_instance()->get_serialized_sample_size(
                endpoint_data, false, encapsulation_id, current_alignment, sample->source);
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        MetadataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        MetadataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            Metadata^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean MetadataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            Metadata^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        MetadataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            Metadata^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        MetadataPlugin^
        MetadataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew MetadataPlugin();
            }
            return _singleton;
        }

        void
        MetadataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace Metadata  */
} /* namespace metadata  */
namespace weather {
    namespace MinimalWeather {

        /* ------------------------------------------------------------------------
        *  Type MinimalWeatherData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        MinimalWeatherDataPlugin::print_data(
            MinimalWeatherData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            DataPrintUtility::print_object(
                sample->Temerature, "Temerature", indent_level);

            DataPrintUtility::print_object(
                sample->Humidity, "Humidity", indent_level);

            DataPrintUtility::print_object(
                sample->metadata, "metadata", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        MinimalWeatherDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            MinimalWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {

                if (!stream.serialize_double(sample->Temerature )) {
                    return false;
                }
                if (!stream.serialize_double(sample->Humidity )) {
                    return false;
                }
                if (!metadata::MetadataPlugin::get_instance()->serialize(
                    endpoint_data,
                    sample->metadata,
                    stream,
                    false, // serialize encapsulation header
                    encapsulation_id,
                    true,  // serialize data
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        MinimalWeatherDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            MinimalWeatherData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                try{

                    sample->Temerature = stream.deserialize_double();
                    sample->Humidity = stream.deserialize_double();
                    if (!metadata::MetadataPlugin::get_instance()->deserialize_sample(
                        endpoint_data,
                        sample->metadata,
                        stream,
                        false, // deserialize encapsulation header
                        true,  // deserialize data
                        endpoint_plugin_qos)) {
                        return false;
                    }

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        MinimalWeatherDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!metadata::MetadataPlugin::get_instance()->skip(
                    endpoint_data,
                    stream, 
                    false, true, 
                    endpoint_plugin_qos)) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        MinimalWeatherDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=  metadata::MetadataPlugin::get_instance()->get_serialized_sample_max_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        MinimalWeatherDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=  metadata::MetadataPlugin::get_instance()->get_serialized_sample_min_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        MinimalWeatherDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            MinimalWeatherData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += metadata::MetadataPlugin::get_instance()->get_serialized_sample_size(
                endpoint_data, false, encapsulation_id, current_alignment, sample->metadata);
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        MinimalWeatherDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        MinimalWeatherDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            MinimalWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean MinimalWeatherDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            MinimalWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        MinimalWeatherDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            MinimalWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        MinimalWeatherDataPlugin^
        MinimalWeatherDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew MinimalWeatherDataPlugin();
            }
            return _singleton;
        }

        void
        MinimalWeatherDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace MinimalWeather  */
    namespace ExtendedWeather {

        /* ------------------------------------------------------------------------
        *  Type ExtendedWeatherData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        ExtendedWeatherDataPlugin::print_data(
            ExtendedWeatherData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->print_data(sample, "", indent_level);

            DataPrintUtility::print_object(
                sample->Pressure, "Pressure", indent_level);

            DataPrintUtility::print_object(
                sample->WindDirection, "WindDirection", indent_level);

            DataPrintUtility::print_object(
                sample->WindSpeed, "WindSpeed", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        ExtendedWeatherDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            ExtendedWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {
                if (!weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->serialize(endpoint_data,sample, stream, false, encapsulation_id, true, endpoint_plugin_qos)) {
                    return false;
                }

                if (!stream.serialize_double(sample->Pressure )) {
                    return false;
                }
                if (!stream.serialize_double(sample->WindDirection )) {
                    return false;
                }
                if (!stream.serialize_double(sample->WindSpeed )) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        ExtendedWeatherDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            ExtendedWeatherData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                if (!weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->deserialize_sample(
                    endpoint_data,sample, stream, false, true, endpoint_plugin_qos)) {
                    return false;
                }

                try{

                    sample->Pressure = stream.deserialize_double();
                    sample->WindDirection = stream.deserialize_double();
                    sample->WindSpeed = stream.deserialize_double();

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        ExtendedWeatherDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->skip(endpoint_data, stream,false, true, endpoint_plugin_qos)) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        ExtendedWeatherDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment += weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->get_serialized_sample_max_size(endpoint_data,false,encapsulation_id,current_alignment);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        ExtendedWeatherDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment += weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->get_serialized_sample_min_size(endpoint_data,false,encapsulation_id,current_alignment);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        ExtendedWeatherDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            ExtendedWeatherData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += weather::MinimalWeather::MinimalWeatherDataPlugin::get_instance()->get_serialized_sample_size(endpoint_data,false,encapsulation_id,current_alignment,sample);

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        ExtendedWeatherDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        ExtendedWeatherDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            ExtendedWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean ExtendedWeatherDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            ExtendedWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        ExtendedWeatherDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            ExtendedWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        ExtendedWeatherDataPlugin^
        ExtendedWeatherDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew ExtendedWeatherDataPlugin();
            }
            return _singleton;
        }

        void
        ExtendedWeatherDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace ExtendedWeather  */
    namespace Cloud {

        /* ------------------------------------------------------------------------
        *  Type CloudData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        CloudDataPlugin::print_data(
            CloudData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            DataPrintUtility::print_object(
                sample->Value, "Value", indent_level);

            DataPrintUtility::print_object(
                sample->description, "description", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        CloudDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            CloudData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {

                if (!stream.serialize_short(sample->Value )) {
                    return false;
                }
                if (!stream.serialize_string(sample->description  , (25))) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        CloudDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            CloudData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                try{

                    sample->Value = stream.deserialize_short();
                    sample->description = stream.deserialize_string( (25));
                    if (sample->description  == nullptr) {
                        return false;
                    }

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        CloudDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!stream.skip_short()) {
                    return false;
                }
                if (!stream.skip_string((25))) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        CloudDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::SHORT->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment , (25)+1);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        CloudDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=CdrSizes::SHORT->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment, 1);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        CloudDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            CloudData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += CdrSizes::SHORT->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::STRING->serialized_size(
                endpoint_data->get_alignment(current_alignment), sample->description);
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        CloudDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        CloudDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            CloudData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean CloudDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            CloudData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        CloudDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            CloudData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        CloudDataPlugin^
        CloudDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew CloudDataPlugin();
            }
            return _singleton;
        }

        void
        CloudDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace Cloud  */
    namespace ForecastInputWeather {

        /* ------------------------------------------------------------------------
        *  Type ForecastInputWeatherData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        ForecastInputWeatherDataPlugin::print_data(
            ForecastInputWeatherData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->print_data(sample, "", indent_level);

            DataPrintUtility::print_object(
                sample->SeaLevelPressure, "SeaLevelPressure", indent_level);

            DataPrintUtility::print_object(
                sample->Phenomena, "Phenomena", indent_level);

            DataPrintUtility::print_object(
                sample->cloud, "cloud", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        ForecastInputWeatherDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            ForecastInputWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {
                if (!weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->serialize(endpoint_data,sample, stream, false, encapsulation_id, true, endpoint_plugin_qos)) {
                    return false;
                }

                if (!stream.serialize_double(sample->SeaLevelPressure )) {
                    return false;
                }
                if (!stream.serialize_string(sample->Phenomena  , (80))) {
                    return false;
                }
                if (!weather::Cloud::CloudDataPlugin::get_instance()->serialize(
                    endpoint_data,
                    sample->cloud,
                    stream,
                    false, // serialize encapsulation header
                    encapsulation_id,
                    true,  // serialize data
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        ForecastInputWeatherDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            ForecastInputWeatherData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                if (!weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->deserialize_sample(
                    endpoint_data,sample, stream, false, true, endpoint_plugin_qos)) {
                    return false;
                }

                try{

                    sample->SeaLevelPressure = stream.deserialize_double();
                    sample->Phenomena = stream.deserialize_string( (80));
                    if (sample->Phenomena  == nullptr) {
                        return false;
                    }
                    if (!weather::Cloud::CloudDataPlugin::get_instance()->deserialize_sample(
                        endpoint_data,
                        sample->cloud,
                        stream,
                        false, // deserialize encapsulation header
                        true,  // deserialize data
                        endpoint_plugin_qos)) {
                        return false;
                    }

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        ForecastInputWeatherDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->skip(endpoint_data, stream,false, true, endpoint_plugin_qos)) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_string((80))) {
                    return false;
                }
                if (!weather::Cloud::CloudDataPlugin::get_instance()->skip(
                    endpoint_data,
                    stream, 
                    false, true, 
                    endpoint_plugin_qos)) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        ForecastInputWeatherDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment += weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->get_serialized_sample_max_size(endpoint_data,false,encapsulation_id,current_alignment);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment , (80)+1);

            current_alignment +=  weather::Cloud::CloudDataPlugin::get_instance()->get_serialized_sample_max_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        ForecastInputWeatherDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment += weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->get_serialized_sample_min_size(endpoint_data,false,encapsulation_id,current_alignment);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::STRING->serialized_size(
                current_alignment, 1);
            current_alignment +=  weather::Cloud::CloudDataPlugin::get_instance()->get_serialized_sample_min_size(
                endpoint_data, false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        ForecastInputWeatherDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            ForecastInputWeatherData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->get_serialized_sample_size(endpoint_data,false,encapsulation_id,current_alignment,sample);

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::STRING->serialized_size(
                endpoint_data->get_alignment(current_alignment), sample->Phenomena);

            current_alignment += weather::Cloud::CloudDataPlugin::get_instance()->get_serialized_sample_size(
                endpoint_data, false, encapsulation_id, current_alignment, sample->cloud);
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        ForecastInputWeatherDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        ForecastInputWeatherDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            ForecastInputWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean ForecastInputWeatherDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            ForecastInputWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        ForecastInputWeatherDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            ForecastInputWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        ForecastInputWeatherDataPlugin^
        ForecastInputWeatherDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew ForecastInputWeatherDataPlugin();
            }
            return _singleton;
        }

        void
        ForecastInputWeatherDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace ForecastInputWeather  */
    namespace AirportWeather {

        /* ------------------------------------------------------------------------
        *  Type AirportWeatherData
        * ------------------------------------------------------------------------ */

        /* ------------------------------------------------------------------------
        Support functions:
        * ------------------------------------------------------------------------ */

        void 
        AirportWeatherDataPlugin::print_data(
            AirportWeatherData^ sample,
            String^ desc,
            UInt32 indent_level) {

            for (UInt32 i = 0; i < indent_level; ++i) { Console::Write("   "); }

            if (desc != nullptr) {
                Console::WriteLine("{0}:", desc);
            } else {
                Console::WriteLine();
            }

            if (sample == nullptr) {
                Console::WriteLine("null");
                return;
            }

            weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->print_data(sample, "", indent_level);

            DataPrintUtility::print_object(
                sample->WindGust, "WindGust", indent_level);

            DataPrintUtility::print_object(
                sample->WindDirChange, "WindDirChange", indent_level);

            DataPrintUtility::print_object(
                sample->WindDirChange1, "WindDirChange1", indent_level);

            DataPrintUtility::print_object(
                sample->DewPoint, "DewPoint", indent_level);

            DataPrintUtility::print_object(
                sample->ViewDistance, "ViewDistance", indent_level);

        }

        /* ------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        AirportWeatherDataPlugin::serialize(
            TypePluginDefaultEndpointData^ endpoint_data,
            AirportWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_sample) {
                if (!weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->serialize(endpoint_data,sample, stream, false, encapsulation_id, true, endpoint_plugin_qos)) {
                    return false;
                }

                if (!stream.serialize_double(sample->WindGust )) {
                    return false;
                }
                if (!stream.serialize_double(sample->WindDirChange )) {
                    return false;
                }
                if (!stream.serialize_double(sample->WindDirChange1 )) {
                    return false;
                }
                if (!stream.serialize_double(sample->DewPoint )) {
                    return false;
                }
                if (!stream.serialize_double(sample->ViewDistance )) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean 
        AirportWeatherDataPlugin::deserialize_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            AirportWeatherData^ sample,
            CdrStream% stream,   
            Boolean deserialize_encapsulation,
            Boolean deserialize_data, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_data) {
                sample->clear();                

                if (!weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->deserialize_sample(
                    endpoint_data,sample, stream, false, true, endpoint_plugin_qos)) {
                    return false;
                }

                try{

                    sample->WindGust = stream.deserialize_double();
                    sample->WindDirChange = stream.deserialize_double();
                    sample->WindDirChange1 = stream.deserialize_double();
                    sample->DewPoint = stream.deserialize_double();
                    sample->ViewDistance = stream.deserialize_double();

                } catch (System::ApplicationException^  e) {
                    if (stream.get_remainder() >= RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        throw gcnew System::ApplicationException("Error deserializing sample! Remainder: " + stream.get_remainder() + "\n" +
                        "Exception caused by: " + e->Message);
                    }
                }
            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        Boolean
        AirportWeatherDataPlugin::skip(
            TypePluginDefaultEndpointData^ endpoint_data,
            CdrStream% stream,   
            Boolean skip_encapsulation,
            Boolean skip_sample, 
            Object^ endpoint_plugin_qos)
        {
            CdrStreamPosition position;

            if (skip_encapsulation) {
                if (!stream.skip_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (skip_sample) {
                if (!weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->skip(endpoint_data, stream,false, true, endpoint_plugin_qos)) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
                if (!stream.skip_double()) {
                    return false;
                }
            }

            if(skip_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;
        }

        /*
        size is the offset from the point where we have do a logical reset
        Return difference in size, not the final offset.
        */
        UInt32 
        AirportWeatherDataPlugin::get_serialized_sample_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment += weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->get_serialized_sample_max_size(endpoint_data,false,encapsulation_id,current_alignment);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment );

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32
        AirportWeatherDataPlugin::get_serialized_sample_min_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    encapsulation_size);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment += weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->get_serialized_sample_min_size(endpoint_data,false,encapsulation_id,current_alignment);

            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);
            current_alignment +=CdrSizes::DOUBLE->serialized_size(
                current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return  current_alignment - initial_alignment;
        }

        UInt32 
        AirportWeatherDataPlugin::get_serialized_sample_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment,
            AirportWeatherData^ sample)
        {

            UInt32 initial_alignment = current_alignment;

            UInt32 encapsulation_size = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                encapsulation_size -= current_alignment;
                current_alignment = 0;
                initial_alignment = 0;
                endpoint_data->set_base_alignment(current_alignment);  
            }

            current_alignment += weather::ExtendedWeather::ExtendedWeatherDataPlugin::get_instance()->get_serialized_sample_size(endpoint_data,false,encapsulation_id,current_alignment,sample);

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));

            current_alignment += CdrSizes::DOUBLE->serialized_size(
                endpoint_data->get_alignment(current_alignment));
            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;
        }

        UInt32
        AirportWeatherDataPlugin::get_serialized_key_max_size(
            TypePluginDefaultEndpointData^ endpoint_data,
            Boolean include_encapsulation,
            UInt16 encapsulation_id,
            UInt32 current_alignment)
        {

            UInt32 encapsulation_size = current_alignment;

            UInt32 initial_alignment = current_alignment;

            if (include_encapsulation) {
                if (!CdrStream::valid_encapsulation_id(encapsulation_id)) {
                    return 1;
                }

                encapsulation_size = CdrSizes::ENCAPSULATION->serialized_size(
                    current_alignment);
                current_alignment = 0;
                initial_alignment = 0;

            }

            current_alignment +=get_serialized_sample_max_size(
                endpoint_data,false, encapsulation_id, current_alignment);

            if (include_encapsulation) {
                current_alignment += encapsulation_size;
            }

            return current_alignment - initial_alignment;

        }

        /* ------------------------------------------------------------------------
        Key Management functions:
        * ------------------------------------------------------------------------ */

        Boolean 
        AirportWeatherDataPlugin::serialize_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            AirportWeatherData^ sample,
            CdrStream% stream,    
            Boolean serialize_encapsulation,
            UInt16 encapsulation_id,
            Boolean serialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (serialize_encapsulation) {
                /* Encapsulate sample */

                if (!stream.serialize_and_set_cdr_encapsulation(encapsulation_id)) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (serialize_key) {
                if (!serialize(
                    endpoint_data,
                    sample,
                    stream,
                    serialize_encapsulation,
                    encapsulation_id, 
                    serialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(serialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean AirportWeatherDataPlugin::deserialize_key_sample(
            TypePluginDefaultEndpointData^ endpoint_data,
            AirportWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,
            Boolean deserialize_key,
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if (deserialize_encapsulation) {
                /* Deserialize encapsulation */
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;  
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data, sample, stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        Boolean
        AirportWeatherDataPlugin::serialized_sample_to_key(
            TypePluginDefaultEndpointData^ endpoint_data,
            AirportWeatherData^ sample,
            CdrStream% stream, 
            Boolean deserialize_encapsulation,  
            Boolean deserialize_key, 
            Object^ endpoint_plugin_qos)
        {

            CdrStreamPosition position;

            if(deserialize_encapsulation) {
                if (!stream.deserialize_and_set_cdr_encapsulation()) {
                    return false;
                }

                position = stream.reset_alignment();

            }

            if (deserialize_key) {

                if (!deserialize_sample(
                    endpoint_data,
                    sample,
                    stream,
                    deserialize_encapsulation,
                    deserialize_key,
                    endpoint_plugin_qos)) {
                    return false;
                }

            }

            if(deserialize_encapsulation) {
                stream.restore_alignment(position);
            }

            return true;

        }

        /* ------------------------------------------------------------------------
        * Plug-in Lifecycle Methods
        * ------------------------------------------------------------------------ */

        AirportWeatherDataPlugin^
        AirportWeatherDataPlugin::get_instance() {
            if (_singleton == nullptr) {
                _singleton = gcnew AirportWeatherDataPlugin();
            }
            return _singleton;
        }

        void
        AirportWeatherDataPlugin::dispose() {
            delete _singleton;
            _singleton = nullptr;
        }

    } /* namespace AirportWeather  */
} /* namespace weather  */
