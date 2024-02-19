cmake_minimum_required(VERSION 3.25.1)

project(
  turing-complete
  VERSION 1.0
  LANGUAGES C
)

include(mk/sources.cmake)
include(mk/cflags.cmake)
include(mk/doc.cmake)

enable_testing()
add_subdirectory(tests)
