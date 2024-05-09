# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget gflags_static gflags_nothreads_static)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target gflags_static
add_library(gflags_static STATIC IMPORTED)

set_target_properties(gflags_static PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "GFLAGS_IS_A_DLL=0"
  INTERFACE_INCLUDE_DIRECTORIES "/home/f1tenth/f1tenth-ws/build/range_lib/vendor/gflags/include"
  INTERFACE_LINK_LIBRARIES "-lpthread"
)

# Create imported target gflags_nothreads_static
add_library(gflags_nothreads_static STATIC IMPORTED)

set_target_properties(gflags_nothreads_static PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "GFLAGS_IS_A_DLL=0"
  INTERFACE_INCLUDE_DIRECTORIES "/home/f1tenth/f1tenth-ws/build/range_lib/vendor/gflags/include"
)

# Import target "gflags_static" for configuration ""
set_property(TARGET gflags_static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gflags_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "/home/f1tenth/f1tenth-ws/build/range_lib/lib/libgflags.a"
  )

# Import target "gflags_nothreads_static" for configuration ""
set_property(TARGET gflags_nothreads_static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(gflags_nothreads_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "/home/f1tenth/f1tenth-ws/build/range_lib/lib/libgflags_nothreads.a"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
