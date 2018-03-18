
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${observer_SOURCE_DIR}/include)

# Adds a library called content (libcontent.a under Linux) from the source
# files under lib/
ADD_LIBRARY( content display_element heat_index_display statistics_display
  current_conditions_display forecast_display observer subject weather_data )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET content
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

