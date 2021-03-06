// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: failure/failure.proto

#include "failure/failure.pb.h"
#include "failure/failure.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace failure {

static const char* FailureService_method_names[] = {
  "/mavsdk.rpc.failure.FailureService/Inject",
};

std::unique_ptr< FailureService::Stub> FailureService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FailureService::Stub> stub(new FailureService::Stub(channel));
  return stub;
}

FailureService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Inject_(FailureService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FailureService::Stub::Inject(::grpc::ClientContext* context, const ::mavsdk::rpc::failure::InjectRequest& request, ::mavsdk::rpc::failure::InjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Inject_, context, request, response);
}

void FailureService::Stub::experimental_async::Inject(::grpc::ClientContext* context, const ::mavsdk::rpc::failure::InjectRequest* request, ::mavsdk::rpc::failure::InjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Inject_, context, request, response, std::move(f));
}

void FailureService::Stub::experimental_async::Inject(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::failure::InjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Inject_, context, request, response, std::move(f));
}

void FailureService::Stub::experimental_async::Inject(::grpc::ClientContext* context, const ::mavsdk::rpc::failure::InjectRequest* request, ::mavsdk::rpc::failure::InjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Inject_, context, request, response, reactor);
}

void FailureService::Stub::experimental_async::Inject(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::failure::InjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Inject_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::failure::InjectResponse>* FailureService::Stub::AsyncInjectRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::failure::InjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::failure::InjectResponse>::Create(channel_.get(), cq, rpcmethod_Inject_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::failure::InjectResponse>* FailureService::Stub::PrepareAsyncInjectRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::failure::InjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::failure::InjectResponse>::Create(channel_.get(), cq, rpcmethod_Inject_, context, request, false);
}

FailureService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FailureService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FailureService::Service, ::mavsdk::rpc::failure::InjectRequest, ::mavsdk::rpc::failure::InjectResponse>(
          std::mem_fn(&FailureService::Service::Inject), this)));
}

FailureService::Service::~Service() {
}

::grpc::Status FailureService::Service::Inject(::grpc::ServerContext* context, const ::mavsdk::rpc::failure::InjectRequest* request, ::mavsdk::rpc::failure::InjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace failure

