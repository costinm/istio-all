load("@protobuf_bzl//:protobuf.bzl", "cc_proto_library")

cc_proto_library(
    name = "collector_proto",
    srcs = ["collector.proto"],
    include = ".",
    deps = [
        "//external:cc_wkt_protos",
    ],
    protoc = "//external:protoc",
    default_runtime = "//external:protobuf",
    visibility = ["//visibility:public"],
)

cc_proto_library(
    name = "lightstep_carrier_proto",
    srcs = ["lightstep_carrier.proto"],
    include = ".",
    deps = [
        "//external:cc_wkt_protos",
    ],
    protoc = "//external:protoc",
    default_runtime = "//external:protobuf",
    visibility = ["//visibility:public"],
)