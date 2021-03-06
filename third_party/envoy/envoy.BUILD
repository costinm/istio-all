
cc_library(
    name = "envoy_common_lib",
    srcs = [
    "source/common/common/base64.cc",
    ],
    includes = [
        "./source",
        "include",
    ],
    deps = [
        "//external:spdlog",
    ],
    hdrs = [
        "source/server/configuration_impl.h",
        "source/server/connection_handler_impl.h",
        "source/server/server.h",
        "source/server/config/network/tcp_proxy.h",
        "source/server/config/network/http_connection_manager.h",
        "source/server/config/network/mongo_proxy.h",
        "source/server/config/network/redis_proxy.h",
        "source/server/config/network/ratelimit.h",
        "source/server/config/network/client_ssl_auth.h",
        "source/server/config/http/zipkin_http_tracer.h",
        "source/server/config/http/grpc_web.h",
        "source/server/config/http/router.h",
        "source/server/config/http/fault.h",
        "source/server/config/http/grpc_http1_bridge.h",
        "source/server/config/http/lightstep_http_tracer.h",
        "source/server/config/http/ratelimit.h",
        "source/server/config/http/buffer.h",
        "source/server/config/http/dynamo.h",
        "source/server/http/admin.h",
        "source/server/http/health_check.h",
        "source/server/watchdog_impl.h",
        "source/server/worker.h",
        "source/server/test_hooks.h",
        "source/server/guarddog_impl.h",
        "source/server/backtrace.h",
        "source/server/drain_manager_impl.h",
        "source/server/config_validation/async_client.h",
        "source/server/config_validation/server.h",
        "source/server/config_validation/api.h",
        "source/server/config_validation/dns.h",
        "source/server/config_validation/connection_handler.h",
        "source/server/config_validation/cluster_manager.h",
        "source/server/config_validation/dispatcher.h",
        "source/server/options_impl.h",
        "source/common/runtime/runtime_impl.h",
        "source/common/runtime/uuid_util.h",
        "source/common/upstream/sds.h",
        "source/common/upstream/cds_api_impl.h",
        "source/common/upstream/resource_manager_impl.h",
        "source/common/upstream/upstream_impl.h",
        "source/common/upstream/outlier_detection_impl.h",
        "source/common/upstream/load_balancer_impl.h",
        "source/common/upstream/ring_hash_lb.h",
        "source/common/upstream/health_checker_impl.h",
        "source/common/upstream/cluster_manager_impl.h",
        "source/common/upstream/host_utility.h",
        "source/common/upstream/logical_dns_cluster.h",
        "source/common/profiler/profiler.h",
        "source/common/router/config_impl.h",
        "source/common/router/rds_impl.h",
        "source/common/router/retry_state_impl.h",
        "source/common/router/shadow_writer_impl.h",
        "source/common/router/router_ratelimit.h",
        "source/common/router/router.h",
        "source/common/router/config_utility.h",
        "source/common/local_info/local_info_impl.h",
        "source/common/common/assert.h",
        "source/common/common/compiler_requirements.h",
        "source/common/common/singleton.h",
        "source/common/common/base64.h",
        "source/common/common/empty_string.h",
        "source/common/common/enum_to_int.h",
        "source/common/common/macros.h",
        "source/common/common/thread.h",
        "source/common/common/c_smart_ptr.h",
        "source/common/common/to_lower_table.h",
        "source/common/common/utility.h",
        "source/common/common/logger.h",
        "source/common/common/stl_helpers.h",
        "source/common/common/non_copyable.h",
        "source/common/common/version.h",
        "source/common/common/linked_object.h",
        "source/common/common/hex.h",
        "source/common/ssl/context_config_impl.h",
        "source/common/ssl/context_impl.h",
        "source/common/ssl/connection_impl.h",
        "source/common/ssl/context_manager_impl.h",
        "source/common/redis/conn_pool_impl.h",
        "source/common/redis/proxy_filter.h",
        "source/common/redis/command_splitter_impl.h",
        "source/common/redis/codec_impl.h",
        "source/common/network/dns_impl.h",
        "source/common/network/cidr_range.h",
        "source/common/network/filter_manager_impl.h",
        "source/common/network/listen_socket_impl.h",
        "source/common/network/connection_impl.h",
        "source/common/network/utility.h",
        "source/common/network/address_impl.h",
        "source/common/network/proxy_protocol.h",
        "source/common/network/filter_impl.h",
        "source/common/network/listener_impl.h",
        "source/common/api/api_impl.h",
        "source/common/dynamo/dynamo_utility.h",
        "source/common/dynamo/dynamo_request_parser.h",
        "source/common/dynamo/dynamo_filter.h",
        "source/common/thread_local/thread_local_impl.h",
        "source/common/mongo/bson_impl.h",
        "source/common/mongo/proxy.h",
        "source/common/mongo/utility.h",
        "source/common/mongo/codec_impl.h",
        "source/common/filter/tcp_proxy.h",
        "source/common/filter/auth",
        "source/common/filter/auth/client_ssl.h",
        "source/common/filter/echo.h",
        "source/common/filter/ratelimit.h",
        "source/common/memory/stats.h",
        "source/common/json/json_loader.h",
        "source/common/json/config_schemas.h",
        "source/common/json/json_validator.h",
        "source/common/http/date_provider.h",
        "source/common/http/date_provider_impl.h",
        "source/common/http/headers.h",
        "source/common/http/codes.h",
        "source/common/http/filter/buffer_filter.h",
        "source/common/http/filter/fault_filter.h",
        "source/common/http/filter/ratelimit.h",
        "source/common/http/user_agent.h",
        "source/common/http/conn_manager_impl.h",
        "source/common/http/conn_manager_utility.h",
        "source/common/http/access_log/request_info_impl.h",
        "source/common/http/access_log/access_log_impl.h",
        "source/common/http/access_log/access_log_formatter.h",
        "source/common/http/exception.h",
        "source/common/http/utility.h",
        "source/common/http/async_client_impl.h",
        "source/common/http/codec_client.h",
        "source/common/http/http1/conn_pool.h",
        "source/common/http/http1/codec_impl.h",
        "source/common/http/message_impl.h",
        "source/common/http/header_map_impl.h",
        "source/common/http/codec_wrappers.h",
        "source/common/http/codec_helper.h",
        "source/common/http/rest_api_fetcher.h",
        "source/common/http/http2/conn_pool.h",
        "source/common/http/http2/codec_impl.h",
        "source/common/ratelimit/ratelimit_impl.h",
        "source/common/access_log/access_log_manager_impl.h",
        "source/common/tracing/lightstep_tracer_impl.h",
        "source/common/tracing/http_tracer_impl.h",
        "source/common/tracing/zipkin/tracer_interface.h",
        "source/common/tracing/zipkin/zipkin_core_types.h",
        "source/common/tracing/zipkin/util.h",
        "source/common/tracing/zipkin/zipkin_tracer_impl.h",
        "source/common/tracing/zipkin/zipkin_core_constants.h",
        "source/common/tracing/zipkin/span_buffer.h",
        "source/common/tracing/zipkin/span_context.h",
        "source/common/tracing/zipkin/tracer.h",
        "source/common/tracing/zipkin/zipkin_json_field_names.h",
        "source/common/event/dispatcher_impl.h",
        "source/common/event/file_event_impl.h",
        "source/common/event/timer_impl.h",
        "source/common/event/libevent.h",
        "source/common/event/signal_impl.h",
        "source/common/event/event_impl_base.h",
        "source/common/stats/stats_impl.h",
        "source/common/stats/thread_local_store.h",
        "source/common/stats/statsd.h",
        "source/common/filesystem/watcher_impl.h",
        "source/common/filesystem/filesystem_impl.h",
        "source/common/grpc/rpc_channel_impl.h",
        "source/common/grpc/grpc_web_filter.h",
        "source/common/grpc/common.h",
        "source/common/grpc/codec.h",
        "source/common/grpc/http1_bridge_filter.h",
        "source/common/buffer/buffer_impl.h",
        "source/exe/hot_restart.h",
        "source/exe/signal_action.h",

        "include/envoy/runtime/runtime.h",
        "include/envoy/upstream/thread_local_cluster.h",
        "include/envoy/upstream/load_balancer.h",
        "include/envoy/upstream/host_description.h",
        "include/envoy/upstream/cluster_manager.h",
        "include/envoy/upstream/outlier_detection.h",
        "include/envoy/upstream/health_checker.h",
        "include/envoy/upstream/resource_manager.h",
        "include/envoy/upstream/load_balancer_type.h",
        "include/envoy/upstream/upstream.h",
        "include/envoy/router/rds.h",
        "include/envoy/router/router_ratelimit.h",
        "include/envoy/router/router.h",
        "include/envoy/router/shadow_writer.h",
        "include/envoy/local_info/local_info.h",
        "include/envoy/server/configuration.h",
        "include/envoy/server/drain_manager.h",
        "include/envoy/server/hot_restart.h",
        "include/envoy/server/guarddog.h",
        "include/envoy/server/watchdog.h",
        "include/envoy/server/admin.h",
        "include/envoy/server/options.h",
        "include/envoy/server/instance.h",
        "include/envoy/common/pure.h",
        "include/envoy/common/optional.h",
        "include/envoy/common/exception.h",
        "include/envoy/common/time.h",
        "include/envoy/ssl/connection.h",
        "include/envoy/ssl/context.h",
        "include/envoy/ssl/context_config.h",
        "include/envoy/ssl/context_manager.h",
        "include/envoy/redis/command_splitter.h",
        "include/envoy/redis/conn_pool.h",
        "include/envoy/redis/codec.h",
        "include/envoy/network/dns.h",
        "include/envoy/network/connection.h",
        "include/envoy/network/connection_handler.h",
        "include/envoy/network/filter.h",
        "include/envoy/network/listener.h",
        "include/envoy/network/listen_socket.h",
        "include/envoy/network/address.h",
        "include/envoy/network/drain_decision.h",
        "include/envoy/api/api.h",
        "include/envoy/thread_local/thread_local.h",
        "include/envoy/mongo/bson.h",
        "include/envoy/mongo/codec.h",
        "include/envoy/thread/thread.h",
        "include/envoy/json/json_object.h",
        "include/envoy/http/async_client.h",
        "include/envoy/http/codes.h",
        "include/envoy/http/filter.h",
        "include/envoy/http/protocol.h",
        "include/envoy/http/header_map.h",
        "include/envoy/http/conn_pool.h",
        "include/envoy/http/codec.h",
        "include/envoy/http/message.h",
        "include/envoy/http/access_log.h",
        "include/envoy/ratelimit/ratelimit.h",
        "include/envoy/access_log/access_log.h",
        "include/envoy/tracing/context.h",
        "include/envoy/tracing/http_tracer.h",
        "include/envoy/init/init.h",
        "include/envoy/event/deferred_deletable.h",
        "include/envoy/event/timer.h",
        "include/envoy/event/signal.h",
        "include/envoy/event/file_event.h",
        "include/envoy/event/dispatcher.h",
        "include/envoy/stats/stats.h",
        "include/envoy/stats/stats_macros.h",
        "include/envoy/filesystem/filesystem.h",
        "include/envoy/grpc/rpc_channel.h",
        "include/envoy/buffer/buffer.h",
    ],
    visibility = ["//visibility:public"],

)

cc_library(
    name = "envoy_main_lib",
    visibility = ["//visibility:public"],

)