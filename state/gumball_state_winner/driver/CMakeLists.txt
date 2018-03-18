
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library
# gumballstatewinner.
INCLUDE_DIRECTORIES(${gumballstatewinner_SOURCE_DIR}/include)

# Add binary called "testgumballstatewinner" that is built from the source file
# "gumball_state_winner.cpp".
# The extension is automatically found.
ADD_EXECUTABLE(testgumballstatewinner gumball_state_winner)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testgumballstatewinner
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library gumballstatewinner.
TARGET_LINK_LIBRARIES(testgumballstatewinner gumballstatewinner)

