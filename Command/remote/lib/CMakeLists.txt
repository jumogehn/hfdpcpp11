
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${remote_SOURCE_DIR}/include)

# Adds a library called remote (libremote.a under Linux) from the source files under lib/
ADD_LIBRARY( remote ceiling_fan ceiling_fan_off_command ceiling_fan_on_command command garage_door garage_door_down_command garage_door_up_command hottub hottub_off_command hottub_on_command light light_off_command light_on_command livingroom_light_off_command livingroom_light_on_command no_command remote_control stereo stereo_off_command stereo_on_with_cd_command tv)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET remote
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

