# Bazel extension for loading git repositories.
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

# Bazel rule for using vulkan.
git_repository(
	name = "rules_vulkan",
	remote = "https://github.com/jadarve/rules_vulkan.git",
	tag = "v0.0.6"
)

load("@rules_vulkan//vulkan:repositories.bzl", "vulkan_repositories")
vulkan_repositories()

# Headers for glsl shaders.
# load("@rules_vulkan//glsl:defs.bzl", "glsl_header_library")
# 
# glsl_header_library(
# 	name = "mylib_glsl_library",
#     hdrs = [
#         "mylib/mylib.glsl",
#         "mylib/color/color.glsl",
#     ],
#     # path from the repository's root that will be stripped
#     strip_include_prefix = "shader_lib",
#     visibility = ["//visibility:public"],
# )
# 
# load("@rules_vulkan//glsl:defs.bzl", "glsl_shader")
# 
# glsl_shader(
#     name = "assign_shader",
#     shader = "assign.comp",
#     deps = [
#         "//shader_lib:mylib_glsl_library"
#     ],
#     visibility = ["//visibility:public"]
# )

# Library for unit testing in the cpp.
git_repository(
	name = "googletest",
	remote = "https://github.com/google/googletest",
	tag = "release-1.8.1",
)


