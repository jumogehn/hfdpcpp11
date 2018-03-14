
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Content_SOURCE_DIR}/include)

# Adds a library called content (libcontent.a under Linux) from the source files under lib/
ADD_LIBRARY( content 
  fake_quack    fly_rocket_powered  model_duck  quack_behavior  squeak
  decoy_duck   fly_behavior  fly_with_wings      mute_quack  red_head_duck
  duck        fly_no_way     mallard_duck       quack      rubber_duck )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET content
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

