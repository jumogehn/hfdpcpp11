
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${barista_SOURCE_DIR}/include)

# Adds a library called barista (libbarista.a under Linux) from the source files under lib/
ADD_LIBRARY( barista 
  caffeine_beverage_with_hook coffee_with_hook tea_with_hook
  caffeine_beverage coffee tea)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET barista
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

