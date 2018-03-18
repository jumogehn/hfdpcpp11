
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${undo_SOURCE_DIR}/include)

# Adds a library called undo (libundo.a under Linux) from the source files
# under lib/
ADD_LIBRARY( undo
  ceiling_fan_medium_command dimmer_light_on_command no_command
  ceiling_fan ceiling_fan_off_command light remote_control_with_undo
  ceiling_fan_high_command command light_off_command
  ceiling_fan_low_command dimmer_light_off_command light_on_command )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET undo
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

