// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: src/envoy/mixer/string_map.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "src/envoy/mixer/string_map.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace istio {
namespace proxy {
namespace mixer {
class StringMapDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<StringMap> {
} _StringMap_default_instance_;

namespace protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringMap, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StringMap, map_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(StringMap)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_StringMap_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "src/envoy/mixer/string_map.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
  const ::google::protobuf::Descriptor* StringMap_MapEntry_descriptor = protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::file_level_metadata[0].descriptor;
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        StringMap_MapEntry_descriptor,
        ::google::protobuf::internal::MapEntry<
            ::std::string,
            ::std::string,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            0>::CreateDefaultInstance(
                StringMap_MapEntry_descriptor));
}

}  // namespace

void TableStruct::Shutdown() {
  _StringMap_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _StringMap_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n src/envoy/mixer/string_map.proto\022\021isti"
      "o.proxy.mixer\"k\n\tStringMap\0222\n\003map\030\001 \003(\0132"
      "%.istio.proxy.mixer.StringMap.MapEntry\032*"
      "\n\010MapEntry\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\002"
      "8\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "src/envoy/mixer/string_map.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto


// ===================================================================

#if PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StringMap::kMapFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StringMap::StringMap()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:istio.proxy.mixer.StringMap)
}
StringMap::StringMap(const StringMap& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  const ::google::protobuf::Descriptor*& StringMap_MapEntry_descriptor = protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::file_level_metadata[0].descriptor;
  map_.SetAssignDescriptorCallback(
      protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::protobuf_AssignDescriptorsOnce);
  map_.SetEntryDescriptor(
      &StringMap_MapEntry_descriptor);
  map_.MergeFrom(from.map_);
  // @@protoc_insertion_point(copy_constructor:istio.proxy.mixer.StringMap)
}

void StringMap::SharedCtor() {
  const ::google::protobuf::Descriptor*& StringMap_MapEntry_descriptor = protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::file_level_metadata[0].descriptor;
  map_.SetAssignDescriptorCallback(
      protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::protobuf_AssignDescriptorsOnce);
  map_.SetEntryDescriptor(
      &StringMap_MapEntry_descriptor);
  _cached_size_ = 0;
}

StringMap::~StringMap() {
  // @@protoc_insertion_point(destructor:istio.proxy.mixer.StringMap)
  SharedDtor();
}

void StringMap::SharedDtor() {
}

void StringMap::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StringMap::descriptor() {
  protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::file_level_metadata[1].descriptor;
}

const StringMap& StringMap::default_instance() {
  protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::InitDefaults();
  return *internal_default_instance();
}

StringMap* StringMap::New(::google::protobuf::Arena* arena) const {
  StringMap* n = new StringMap;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StringMap::Clear() {
// @@protoc_insertion_point(message_clear_start:istio.proxy.mixer.StringMap)
  map_.Clear();
}

bool StringMap::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:istio.proxy.mixer.StringMap)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<string, string> map = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          StringMap_MapEntry::Parser< ::google::protobuf::internal::MapField<
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), parser.key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.proxy.mixer.StringMap.MapEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), parser.value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.proxy.mixer.StringMap.MapEntry.value"));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:istio.proxy.mixer.StringMap)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:istio.proxy.mixer.StringMap)
  return false;
#undef DO_
}

void StringMap::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:istio.proxy.mixer.StringMap)
  // map<string, string> map = 1;
  if (!this->map().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.proxy.mixer.StringMap.MapEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.proxy.mixer.StringMap.MapEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->map().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->map().begin();
          it != this->map().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<StringMap_MapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(map_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<StringMap_MapEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->map().begin();
          it != this->map().end(); ++it) {
        entry.reset(map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_end:istio.proxy.mixer.StringMap)
}

::google::protobuf::uint8* StringMap::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:istio.proxy.mixer.StringMap)
  // map<string, string> map = 1;
  if (!this->map().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.proxy.mixer.StringMap.MapEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "istio.proxy.mixer.StringMap.MapEntry.value");
      }
    };

    if (deterministic &&
        this->map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->map().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->map().begin();
          it != this->map().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<StringMap_MapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(map_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<StringMap_MapEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->map().begin();
          it != this->map().end(); ++it) {
        entry.reset(map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:istio.proxy.mixer.StringMap)
  return target;
}

size_t StringMap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:istio.proxy.mixer.StringMap)
  size_t total_size = 0;

  // map<string, string> map = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->map_size());
  {
    ::google::protobuf::scoped_ptr<StringMap_MapEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->map().begin();
        it != this->map().end(); ++it) {
      entry.reset(map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StringMap::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:istio.proxy.mixer.StringMap)
  GOOGLE_DCHECK_NE(&from, this);
  const StringMap* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StringMap>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:istio.proxy.mixer.StringMap)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:istio.proxy.mixer.StringMap)
    MergeFrom(*source);
  }
}

void StringMap::MergeFrom(const StringMap& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:istio.proxy.mixer.StringMap)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  map_.MergeFrom(from.map_);
}

void StringMap::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:istio.proxy.mixer.StringMap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StringMap::CopyFrom(const StringMap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:istio.proxy.mixer.StringMap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StringMap::IsInitialized() const {
  return true;
}

void StringMap::Swap(StringMap* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StringMap::InternalSwap(StringMap* other) {
  map_.Swap(&other->map_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StringMap::GetMetadata() const {
  protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_src_2fenvoy_2fmixer_2fstring_5fmap_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StringMap

// map<string, string> map = 1;
int StringMap::map_size() const {
  return map_.size();
}
void StringMap::clear_map() {
  map_.Clear();
}
 const ::google::protobuf::Map< ::std::string, ::std::string >&
StringMap::map() const {
  // @@protoc_insertion_point(field_map:istio.proxy.mixer.StringMap.map)
  return map_.GetMap();
}
 ::google::protobuf::Map< ::std::string, ::std::string >*
StringMap::mutable_map() {
  // @@protoc_insertion_point(field_mutable_map:istio.proxy.mixer.StringMap.map)
  return map_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace mixer
}  // namespace proxy
}  // namespace istio

// @@protoc_insertion_point(global_scope)
