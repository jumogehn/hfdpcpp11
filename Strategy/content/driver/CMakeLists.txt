
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library content.
INCLUDE_DIRECTORIES(${strategy_SOURCE_DIR}/include)

# Add binary called "teststrategy" that is built from the source file "mini_duck_simulator.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(teststrategy mini_duck_simulator)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET teststrategy
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library content.
TARGET_LINK_LIBRARIES(teststrategy content)

