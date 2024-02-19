set(TEST fundamental)
include(${CMAKE_SOURCE_DIR}/mk/test.cmake)

set(TEST logic_gate)
include(${CMAKE_SOURCE_DIR}/mk/test.cmake)

add_custom_target(
  tests
  DEPENDS ${TESTS}
)
