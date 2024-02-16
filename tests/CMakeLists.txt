set(TEST elementary_gates)
include(${CMAKE_SOURCE_DIR}/mk/test.cmake)

add_custom_target(
  tests
  ctest -j
  DEPENDS ${TESTS}
)
