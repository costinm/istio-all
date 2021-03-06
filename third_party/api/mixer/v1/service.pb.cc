// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mixer/v1/service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mixer/v1/service.pb.h"

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

namespace protobuf_mixer_2fv1_2fservice_2eproto {


namespace {

const ::google::protobuf::ServiceDescriptor* file_level_service_descriptors[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "mixer/v1/service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, file_level_service_descriptors);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void TableStruct::Shutdown() {
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fcheck_2eproto::InitDefaults();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2freport_2eproto::InitDefaults();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fquota_2eproto::InitDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026mixer/v1/service.proto\022\016istio.mixer.v1"
      "\032\024mixer/v1/check.proto\032\025mixer/v1/report."
      "proto\032\024mixer/v1/quota.proto2\342\001\n\005Mixer\022F\n"
      "\005Check\022\034.istio.mixer.v1.CheckRequest\032\035.i"
      "stio.mixer.v1.CheckResponse\"\000\022I\n\006Report\022"
      "\035.istio.mixer.v1.ReportRequest\032\036.istio.m"
      "ixer.v1.ReportResponse\"\000\022F\n\005Quota\022\034.isti"
      "o.mixer.v1.QuotaRequest\032\035.istio.mixer.v1"
      ".QuotaResponse\"\000B\003\200\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 349);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mixer/v1/service.proto", &protobuf_RegisterTypes);
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fcheck_2eproto::AddDescriptors();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2freport_2eproto::AddDescriptors();
  ::istio::mixer::v1::protobuf_mixer_2fv1_2fquota_2eproto::AddDescriptors();
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

}  // namespace protobuf_mixer_2fv1_2fservice_2eproto


// ===================================================================

Mixer::~Mixer() {}

const ::google::protobuf::ServiceDescriptor* Mixer::descriptor() {
  protobuf_mixer_2fv1_2fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mixer_2fv1_2fservice_2eproto::file_level_service_descriptors[0];
}

const ::google::protobuf::ServiceDescriptor* Mixer::GetDescriptor() {
  return descriptor();
}

void Mixer::Check(::google::protobuf::RpcController* controller,
                         const ::istio::mixer::v1::CheckRequest*,
                         ::istio::mixer::v1::CheckResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Check() not implemented.");
  done->Run();
}

void Mixer::Report(::google::protobuf::RpcController* controller,
                         const ::istio::mixer::v1::ReportRequest*,
                         ::istio::mixer::v1::ReportResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Report() not implemented.");
  done->Run();
}

void Mixer::Quota(::google::protobuf::RpcController* controller,
                         const ::istio::mixer::v1::QuotaRequest*,
                         ::istio::mixer::v1::QuotaResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Quota() not implemented.");
  done->Run();
}

void Mixer::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), protobuf_mixer_2fv1_2fservice_2eproto::file_level_service_descriptors[0]);
  switch(method->index()) {
    case 0:
      Check(controller,
             ::google::protobuf::down_cast<const ::istio::mixer::v1::CheckRequest*>(request),
             ::google::protobuf::down_cast< ::istio::mixer::v1::CheckResponse*>(response),
             done);
      break;
    case 1:
      Report(controller,
             ::google::protobuf::down_cast<const ::istio::mixer::v1::ReportRequest*>(request),
             ::google::protobuf::down_cast< ::istio::mixer::v1::ReportResponse*>(response),
             done);
      break;
    case 2:
      Quota(controller,
             ::google::protobuf::down_cast<const ::istio::mixer::v1::QuotaRequest*>(request),
             ::google::protobuf::down_cast< ::istio::mixer::v1::QuotaResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& Mixer::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::istio::mixer::v1::CheckRequest::default_instance();
    case 1:
      return ::istio::mixer::v1::ReportRequest::default_instance();
    case 2:
      return ::istio::mixer::v1::QuotaRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& Mixer::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::istio::mixer::v1::CheckResponse::default_instance();
    case 1:
      return ::istio::mixer::v1::ReportResponse::default_instance();
    case 2:
      return ::istio::mixer::v1::QuotaResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

Mixer_Stub::Mixer_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
Mixer_Stub::Mixer_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
Mixer_Stub::~Mixer_Stub() {
  if (owns_channel_) delete channel_;
}

void Mixer_Stub::Check(::google::protobuf::RpcController* controller,
                              const ::istio::mixer::v1::CheckRequest* request,
                              ::istio::mixer::v1::CheckResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void Mixer_Stub::Report(::google::protobuf::RpcController* controller,
                              const ::istio::mixer::v1::ReportRequest* request,
                              ::istio::mixer::v1::ReportResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}
void Mixer_Stub::Quota(::google::protobuf::RpcController* controller,
                              const ::istio::mixer::v1::QuotaRequest* request,
                              ::istio::mixer::v1::QuotaResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(2),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace mixer
}  // namespace istio

// @@protoc_insertion_point(global_scope)
