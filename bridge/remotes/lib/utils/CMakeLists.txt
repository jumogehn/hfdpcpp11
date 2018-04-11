
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
include_directories(${remotes_SOURCE_DIR}/include/utils)

# Adds a library called utils (libutils.a under Linux) from the source files under lib/
add_library( utils utilities )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET utils
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

install (TARGETS utils DESTINATION bin)
install (FILES ${remotes_SOURCE_DIR}/include/utils/utilities.hpp DESTINATION include)

