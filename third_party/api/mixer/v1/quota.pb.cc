// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mixer/v1/quota.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mixer/v1/quota.pb.h"

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
namespace mixer {
namespace v1 {
class QuotaRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<QuotaRequest> {
} _QuotaRequest_default_instance_;
class QuotaResponseDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<QuotaResponse> {
} _QuotaResponse_default_instance_;

namespace protobuf_mixer_2fv1_2fquota_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaRequest, attributes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaRequest, deduplication_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaRequest, quota_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaRequest, amount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaRequest, best_effort_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaResponse, expiration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuotaResponse, amount_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(QuotaRequest)},
  { 9, -1, sizeof(QuotaResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_QuotaRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_QuotaResponse_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "mixer/v1/quota.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
}

}  // namespace

void TableStruct::Shutdown() {
  _QuotaRequest_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _QuotaResponse_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::protobuf::protobuf_google_2fprotobuf_2fduration_2eproto::InitDefaults();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fattributes_2eproto::InitDefaults();
  _QuotaRequest_default_instance_.DefaultConstruct();
  _QuotaResponse_default_instance_.DefaultConstruct();
  _QuotaRequest_default_instance_.get_mutable()->attributes_ = const_cast< ::istio::mixer::v1::Attributes*>(
      ::istio::mixer::v1::Attributes::internal_default_instance());
  _QuotaResponse_default_instance_.get_mutable()->expiration_ = const_cast< ::google::protobuf::Duration*>(
      ::google::protobuf::Duration::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\024mixer/v1/quota.proto\022\016istio.mixer.v1\032\036"
      "google/protobuf/duration.proto\032\031mixer/v1"
      "/attributes.proto\"\214\001\n\014QuotaRequest\022.\n\nat"
      "tributes\030\001 \001(\0132\032.istio.mixer.v1.Attribut"
      "es\022\030\n\020deduplication_id\030\002 \001(\t\022\r\n\005quota\030\003 "
      "\001(\t\022\016\n\006amount\030\004 \001(\003\022\023\n\013best_effort\030\005 \001(\010"
      "\"N\n\rQuotaResponse\022-\n\nexpiration\030\001 \001(\0132\031."
      "google.protobuf.Duration\022\016\n\006amount\030\002 \001(\003"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 328);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mixer/v1/quota.proto", &protobuf_RegisterTypes);
  ::google::protobuf::protobuf_google_2fprotobuf_2fduration_2eproto::AddDescriptors();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fattributes_2eproto::AddDescriptors();
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

}  // namespace protobuf_mixer_2fv1_2fquota_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QuotaRequest::kAttributesFieldNumber;
const int QuotaRequest::kDeduplicationIdFieldNumber;
const int QuotaRequest::kQuotaFieldNumber;
const int QuotaRequest::kAmountFieldNumber;
const int QuotaRequest::kBestEffortFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QuotaRequest::QuotaRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_mixer_2fv1_2fquota_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:istio.mixer.v1.QuotaRequest)
}
QuotaRequest::QuotaRequest(const QuotaRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  deduplication_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.deduplication_id().size() > 0) {
    deduplication_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deduplication_id_);
  }
  quota_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.quota().size() > 0) {
    quota_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.quota_);
  }
  if (from.has_attributes()) {
    attributes_ = new ::istio::mixer::v1::Attributes(*from.attributes_);
  } else {
    attributes_ = NULL;
  }
  ::memcpy(&amount_, &from.amount_,
    reinterpret_cast<char*>(&best_effort_) -
    reinterpret_cast<char*>(&amount_) + sizeof(best_effort_));
  // @@protoc_insertion_point(copy_constructor:istio.mixer.v1.QuotaRequest)
}

void QuotaRequest::SharedCtor() {
  deduplication_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  quota_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&attributes_, 0, reinterpret_cast<char*>(&best_effort_) -
    reinterpret_cast<char*>(&attributes_) + sizeof(best_effort_));
  _cached_size_ = 0;
}

QuotaRequest::~QuotaRequest() {
  // @@protoc_insertion_point(destructor:istio.mixer.v1.QuotaRequest)
  SharedDtor();
}

void QuotaRequest::SharedDtor() {
  deduplication_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  quota_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete attributes_;
  }
}

void QuotaRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QuotaRequest::descriptor() {
  protobuf_mixer_2fv1_2fquota_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2fquota_2eproto::file_level_metadata[0].descriptor;
}

const QuotaRequest& QuotaRequest::default_instance() {
  protobuf_mixer_2fv1_2fquota_2eproto::InitDefaults();
  return *internal_default_instance();
}

QuotaRequest* QuotaRequest::New(::google::protobuf::Arena* arena) const {
  QuotaRequest* n = new QuotaRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void QuotaRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:istio.mixer.v1.QuotaRequest)
  deduplication_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  quota_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && attributes_ != NULL) {
    delete attributes_;
  }
  attributes_ = NULL;
  ::memset(&amount_, 0, reinterpret_cast<char*>(&best_effort_) -
    reinterpret_cast<char*>(&amount_) + sizeof(best_effort_));
}

bool QuotaRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:istio.mixer.v1.QuotaRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .istio.mixer.v1.Attributes attributes = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_attributes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string deduplication_id = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deduplication_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->deduplication_id().data(), this->deduplication_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mixer.v1.QuotaRequest.deduplication_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string quota = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_quota()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->quota().data(), this->quota().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "istio.mixer.v1.QuotaRequest.quota"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 amount = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool best_effort = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &best_effort_)));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:istio.mixer.v1.QuotaRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:istio.mixer.v1.QuotaRequest)
  return false;
#undef DO_
}

void QuotaRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:istio.mixer.v1.QuotaRequest)
  // .istio.mixer.v1.Attributes attributes = 1;
  if (this->has_attributes()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->attributes_, output);
  }

  // string deduplication_id = 2;
  if (this->deduplication_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deduplication_id().data(), this->deduplication_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mixer.v1.QuotaRequest.deduplication_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->deduplication_id(), output);
  }

  // string quota = 3;
  if (this->quota().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->quota().data(), this->quota().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mixer.v1.QuotaRequest.quota");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->quota(), output);
  }

  // int64 amount = 4;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->amount(), output);
  }

  // bool best_effort = 5;
  if (this->best_effort() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->best_effort(), output);
  }

  // @@protoc_insertion_point(serialize_end:istio.mixer.v1.QuotaRequest)
}

::google::protobuf::uint8* QuotaRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:istio.mixer.v1.QuotaRequest)
  // .istio.mixer.v1.Attributes attributes = 1;
  if (this->has_attributes()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->attributes_, false, target);
  }

  // string deduplication_id = 2;
  if (this->deduplication_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deduplication_id().data(), this->deduplication_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mixer.v1.QuotaRequest.deduplication_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->deduplication_id(), target);
  }

  // string quota = 3;
  if (this->quota().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->quota().data(), this->quota().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "istio.mixer.v1.QuotaRequest.quota");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->quota(), target);
  }

  // int64 amount = 4;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->amount(), target);
  }

  // bool best_effort = 5;
  if (this->best_effort() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->best_effort(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:istio.mixer.v1.QuotaRequest)
  return target;
}

size_t QuotaRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:istio.mixer.v1.QuotaRequest)
  size_t total_size = 0;

  // string deduplication_id = 2;
  if (this->deduplication_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->deduplication_id());
  }

  // string quota = 3;
  if (this->quota().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->quota());
  }

  // .istio.mixer.v1.Attributes attributes = 1;
  if (this->has_attributes()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->attributes_);
  }

  // int64 amount = 4;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  // bool best_effort = 5;
  if (this->best_effort() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QuotaRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:istio.mixer.v1.QuotaRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const QuotaRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const QuotaRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:istio.mixer.v1.QuotaRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:istio.mixer.v1.QuotaRequest)
    MergeFrom(*source);
  }
}

void QuotaRequest::MergeFrom(const QuotaRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:istio.mixer.v1.QuotaRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.deduplication_id().size() > 0) {

    deduplication_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deduplication_id_);
  }
  if (from.quota().size() > 0) {

    quota_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.quota_);
  }
  if (from.has_attributes()) {
    mutable_attributes()->::istio::mixer::v1::Attributes::MergeFrom(from.attributes());
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
  if (from.best_effort() != 0) {
    set_best_effort(from.best_effort());
  }
}

void QuotaRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:istio.mixer.v1.QuotaRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QuotaRequest::CopyFrom(const QuotaRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:istio.mixer.v1.QuotaRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QuotaRequest::IsInitialized() const {
  return true;
}

void QuotaRequest::Swap(QuotaRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QuotaRequest::InternalSwap(QuotaRequest* other) {
  deduplication_id_.Swap(&other->deduplication_id_);
  quota_.Swap(&other->quota_);
  std::swap(attributes_, other->attributes_);
  std::swap(amount_, other->amount_);
  std::swap(best_effort_, other->best_effort_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata QuotaRequest::GetMetadata() const {
  protobuf_mixer_2fv1_2fquota_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2fquota_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// QuotaRequest

// .istio.mixer.v1.Attributes attributes = 1;
bool QuotaRequest::has_attributes() const {
  return this != internal_default_instance() && attributes_ != NULL;
}
void QuotaRequest::clear_attributes() {
  if (GetArenaNoVirtual() == NULL && attributes_ != NULL) delete attributes_;
  attributes_ = NULL;
}
const ::istio::mixer::v1::Attributes& QuotaRequest::attributes() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaRequest.attributes)
  return attributes_ != NULL ? *attributes_
                         : *::istio::mixer::v1::Attributes::internal_default_instance();
}
::istio::mixer::v1::Attributes* QuotaRequest::mutable_attributes() {
  
  if (attributes_ == NULL) {
    attributes_ = new ::istio::mixer::v1::Attributes;
  }
  // @@protoc_insertion_point(field_mutable:istio.mixer.v1.QuotaRequest.attributes)
  return attributes_;
}
::istio::mixer::v1::Attributes* QuotaRequest::release_attributes() {
  // @@protoc_insertion_point(field_release:istio.mixer.v1.QuotaRequest.attributes)
  
  ::istio::mixer::v1::Attributes* temp = attributes_;
  attributes_ = NULL;
  return temp;
}
void QuotaRequest::set_allocated_attributes(::istio::mixer::v1::Attributes* attributes) {
  delete attributes_;
  attributes_ = attributes;
  if (attributes) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.v1.QuotaRequest.attributes)
}

// string deduplication_id = 2;
void QuotaRequest::clear_deduplication_id() {
  deduplication_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& QuotaRequest::deduplication_id() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaRequest.deduplication_id)
  return deduplication_id_.GetNoArena();
}
void QuotaRequest::set_deduplication_id(const ::std::string& value) {
  
  deduplication_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:istio.mixer.v1.QuotaRequest.deduplication_id)
}
#if LANG_CXX11
void QuotaRequest::set_deduplication_id(::std::string&& value) {
  
  deduplication_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:istio.mixer.v1.QuotaRequest.deduplication_id)
}
#endif
void QuotaRequest::set_deduplication_id(const char* value) {
  
  deduplication_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:istio.mixer.v1.QuotaRequest.deduplication_id)
}
void QuotaRequest::set_deduplication_id(const char* value, size_t size) {
  
  deduplication_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:istio.mixer.v1.QuotaRequest.deduplication_id)
}
::std::string* QuotaRequest::mutable_deduplication_id() {
  
  // @@protoc_insertion_point(field_mutable:istio.mixer.v1.QuotaRequest.deduplication_id)
  return deduplication_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* QuotaRequest::release_deduplication_id() {
  // @@protoc_insertion_point(field_release:istio.mixer.v1.QuotaRequest.deduplication_id)
  
  return deduplication_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void QuotaRequest::set_allocated_deduplication_id(::std::string* deduplication_id) {
  if (deduplication_id != NULL) {
    
  } else {
    
  }
  deduplication_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), deduplication_id);
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.v1.QuotaRequest.deduplication_id)
}

// string quota = 3;
void QuotaRequest::clear_quota() {
  quota_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& QuotaRequest::quota() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaRequest.quota)
  return quota_.GetNoArena();
}
void QuotaRequest::set_quota(const ::std::string& value) {
  
  quota_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:istio.mixer.v1.QuotaRequest.quota)
}
#if LANG_CXX11
void QuotaRequest::set_quota(::std::string&& value) {
  
  quota_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:istio.mixer.v1.QuotaRequest.quota)
}
#endif
void QuotaRequest::set_quota(const char* value) {
  
  quota_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:istio.mixer.v1.QuotaRequest.quota)
}
void QuotaRequest::set_quota(const char* value, size_t size) {
  
  quota_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:istio.mixer.v1.QuotaRequest.quota)
}
::std::string* QuotaRequest::mutable_quota() {
  
  // @@protoc_insertion_point(field_mutable:istio.mixer.v1.QuotaRequest.quota)
  return quota_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* QuotaRequest::release_quota() {
  // @@protoc_insertion_point(field_release:istio.mixer.v1.QuotaRequest.quota)
  
  return quota_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void QuotaRequest::set_allocated_quota(::std::string* quota) {
  if (quota != NULL) {
    
  } else {
    
  }
  quota_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), quota);
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.v1.QuotaRequest.quota)
}

// int64 amount = 4;
void QuotaRequest::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 QuotaRequest::amount() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaRequest.amount)
  return amount_;
}
void QuotaRequest::set_amount(::google::protobuf::int64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:istio.mixer.v1.QuotaRequest.amount)
}

// bool best_effort = 5;
void QuotaRequest::clear_best_effort() {
  best_effort_ = false;
}
bool QuotaRequest::best_effort() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaRequest.best_effort)
  return best_effort_;
}
void QuotaRequest::set_best_effort(bool value) {
  
  best_effort_ = value;
  // @@protoc_insertion_point(field_set:istio.mixer.v1.QuotaRequest.best_effort)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QuotaResponse::kExpirationFieldNumber;
const int QuotaResponse::kAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QuotaResponse::QuotaResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_mixer_2fv1_2fquota_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:istio.mixer.v1.QuotaResponse)
}
QuotaResponse::QuotaResponse(const QuotaResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_expiration()) {
    expiration_ = new ::google::protobuf::Duration(*from.expiration_);
  } else {
    expiration_ = NULL;
  }
  amount_ = from.amount_;
  // @@protoc_insertion_point(copy_constructor:istio.mixer.v1.QuotaResponse)
}

void QuotaResponse::SharedCtor() {
  ::memset(&expiration_, 0, reinterpret_cast<char*>(&amount_) -
    reinterpret_cast<char*>(&expiration_) + sizeof(amount_));
  _cached_size_ = 0;
}

QuotaResponse::~QuotaResponse() {
  // @@protoc_insertion_point(destructor:istio.mixer.v1.QuotaResponse)
  SharedDtor();
}

void QuotaResponse::SharedDtor() {
  if (this != internal_default_instance()) {
    delete expiration_;
  }
}

void QuotaResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QuotaResponse::descriptor() {
  protobuf_mixer_2fv1_2fquota_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2fquota_2eproto::file_level_metadata[1].descriptor;
}

const QuotaResponse& QuotaResponse::default_instance() {
  protobuf_mixer_2fv1_2fquota_2eproto::InitDefaults();
  return *internal_default_instance();
}

QuotaResponse* QuotaResponse::New(::google::protobuf::Arena* arena) const {
  QuotaResponse* n = new QuotaResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void QuotaResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:istio.mixer.v1.QuotaResponse)
  if (GetArenaNoVirtual() == NULL && expiration_ != NULL) {
    delete expiration_;
  }
  expiration_ = NULL;
  amount_ = GOOGLE_LONGLONG(0);
}

bool QuotaResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:istio.mixer.v1.QuotaResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.Duration expiration = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_expiration()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 amount = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:istio.mixer.v1.QuotaResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:istio.mixer.v1.QuotaResponse)
  return false;
#undef DO_
}

void QuotaResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:istio.mixer.v1.QuotaResponse)
  // .google.protobuf.Duration expiration = 1;
  if (this->has_expiration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->expiration_, output);
  }

  // int64 amount = 2;
  if (this->amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->amount(), output);
  }

  // @@protoc_insertion_point(serialize_end:istio.mixer.v1.QuotaResponse)
}

::google::protobuf::uint8* QuotaResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:istio.mixer.v1.QuotaResponse)
  // .google.protobuf.Duration expiration = 1;
  if (this->has_expiration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->expiration_, false, target);
  }

  // int64 amount = 2;
  if (this->amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->amount(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:istio.mixer.v1.QuotaResponse)
  return target;
}

size_t QuotaResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:istio.mixer.v1.QuotaResponse)
  size_t total_size = 0;

  // .google.protobuf.Duration expiration = 1;
  if (this->has_expiration()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->expiration_);
  }

  // int64 amount = 2;
  if (this->amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QuotaResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:istio.mixer.v1.QuotaResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const QuotaResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const QuotaResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:istio.mixer.v1.QuotaResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:istio.mixer.v1.QuotaResponse)
    MergeFrom(*source);
  }
}

void QuotaResponse::MergeFrom(const QuotaResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:istio.mixer.v1.QuotaResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_expiration()) {
    mutable_expiration()->::google::protobuf::Duration::MergeFrom(from.expiration());
  }
  if (from.amount() != 0) {
    set_amount(from.amount());
  }
}

void QuotaResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:istio.mixer.v1.QuotaResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QuotaResponse::CopyFrom(const QuotaResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:istio.mixer.v1.QuotaResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QuotaResponse::IsInitialized() const {
  return true;
}

void QuotaResponse::Swap(QuotaResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QuotaResponse::InternalSwap(QuotaResponse* other) {
  std::swap(expiration_, other->expiration_);
  std::swap(amount_, other->amount_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata QuotaResponse::GetMetadata() const {
  protobuf_mixer_2fv1_2fquota_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2fquota_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// QuotaResponse

// .google.protobuf.Duration expiration = 1;
bool QuotaResponse::has_expiration() const {
  return this != internal_default_instance() && expiration_ != NULL;
}
void QuotaResponse::clear_expiration() {
  if (GetArenaNoVirtual() == NULL && expiration_ != NULL) delete expiration_;
  expiration_ = NULL;
}
const ::google::protobuf::Duration& QuotaResponse::expiration() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaResponse.expiration)
  return expiration_ != NULL ? *expiration_
                         : *::google::protobuf::Duration::internal_default_instance();
}
::google::protobuf::Duration* QuotaResponse::mutable_expiration() {
  
  if (expiration_ == NULL) {
    expiration_ = new ::google::protobuf::Duration;
  }
  // @@protoc_insertion_point(field_mutable:istio.mixer.v1.QuotaResponse.expiration)
  return expiration_;
}
::google::protobuf::Duration* QuotaResponse::release_expiration() {
  // @@protoc_insertion_point(field_release:istio.mixer.v1.QuotaResponse.expiration)
  
  ::google::protobuf::Duration* temp = expiration_;
  expiration_ = NULL;
  return temp;
}
void QuotaResponse::set_allocated_expiration(::google::protobuf::Duration* expiration) {
  delete expiration_;
  if (expiration != NULL && expiration->GetArena() != NULL) {
    ::google::protobuf::Duration* new_expiration = new ::google::protobuf::Duration;
    new_expiration->CopyFrom(*expiration);
    expiration = new_expiration;
  }
  expiration_ = expiration;
  if (expiration) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:istio.mixer.v1.QuotaResponse.expiration)
}

// int64 amount = 2;
void QuotaResponse::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 QuotaResponse::amount() const {
  // @@protoc_insertion_point(field_get:istio.mixer.v1.QuotaResponse.amount)
  return amount_;
}
void QuotaResponse::set_amount(::google::protobuf::int64 value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:istio.mixer.v1.QuotaResponse.amount)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace mixer
}  // namespace istio

// @@protoc_insertion_point(global_scope)
