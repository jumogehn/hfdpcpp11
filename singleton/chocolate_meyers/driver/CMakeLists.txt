
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library chocolatemrs.
INCLUDE_DIRECTORIES(${chocolatemrs_SOURCE_DIR}/include)

# Add binary called "testchocolatemrs" that is built from the source file "chocolate.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testchocolatemrs chocolate)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testchocolatemrs
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library chocolatemrs.
TARGET_LINK_LIBRARIES(testchocolatemrs chocolatemrs)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testchocolatemrs duck duckadapter mallardduck turkey turkeyadapter wildturkey)

