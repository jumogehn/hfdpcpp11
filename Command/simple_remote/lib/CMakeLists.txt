
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${simpleremote_SOURCE_DIR}/include)

# Adds a library called simpleremote (libsimpleremote.a under Linux) from the source files under lib/
ADD_LIBRARY( simpleremote garage_door light light_on_command command garage_door_open_command light_off_command simple_remote_control )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET simpleremote
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

