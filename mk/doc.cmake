##
# Generate the documentation from rst/md input files.

find_program(PYTHON_3 python3 REQUIRED)

set(DOC_DIR ${CMAKE_SOURCE_DIR}/doc)
set(DOC_BUILD_DIR ${CMAKE_BINARY_DIR}/doc)

# Default theme.
set(SPHINX_THEME "sphinx_rtd_theme")
 
# Sphinx cache with pickled ReST documents
set(SPHINX_CACHE_DIR "${DOC_BUILD_DIR}/_doctrees")

# Main target to generate the documentation.
add_custom_target(
  doc
  COMMAND ${PYTHON_3} -m sphinx
    -q -b html
    -c ${DOC_DIR}
    -d ${SPHINX_CACHE_DIR}
    ${DOC_DIR}
    ${DOC_BUILD_DIR}
  COMMENT "Building HTML documentation with Sphinx"
)
