
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Chocolatemrs_SOURCE_DIR}/include)

# Adds a library called chocolatemrs (libchocolatemrs.a under Linux) from the source files under lib/
ADD_LIBRARY( chocolatemrs ChocolateBoiler )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET chocolatemrs
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

