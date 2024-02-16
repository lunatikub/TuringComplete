set(TARGET test_${TEST})

add_executable(
  ${TARGET}
  EXCLUDE_FROM_ALL
  ${TEST}.c
)

target_compile_options(
  ${TARGET}
  PRIVATE
  -g
  -ggdb
)

target_include_directories(
  ${TARGET}
  PRIVATE
  ${CMAKE_SOURCE_DIR}/src
  ${CMAKE_SOURCE_DIR}/tests
)

add_test(${TARGET} ${TARGET})
set(TESTS ${TESTS} ${TARGET})
unset(TEST)
