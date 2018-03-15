
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${gumballstatewinner_SOURCE_DIR}/include)

# Adds a library called gumballstatewinner (libgumballstatewinner.a under Linux) from the source files under lib/
ADD_LIBRARY( gumballstatewinner has_quarter_state sold_out_state state winner_state gumball_machine no_quarter_state sold_state )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET gumballstatewinner
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

