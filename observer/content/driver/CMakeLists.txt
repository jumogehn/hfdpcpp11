
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library content.
INCLUDE_DIRECTORIES(${observer_SOURCE_DIR}/include)

# Add binary called "testobserver" that is built from the source file "weather_station.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testobserver weather_station)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testobserver
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library content.
TARGET_LINK_LIBRARIES(testobserver content)

