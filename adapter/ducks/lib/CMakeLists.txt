
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in ducks dir
INCLUDE_DIRECTORIES(${ducks_SOURCE_DIR}/include)

# Adds a library called ducks (libducks.a under Linux) from the source files
# under lib/
ADD_LIBRARY( ducks duck duck_adapter mallard_duck turkey turkey_adapter
  wild_turkey)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET ducks
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

