
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${menus_SOURCE_DIR}/include)

# Adds a library called menus (libmenus.a under Linux) from the source files
# under lib/
ADD_LIBRARY( menus menu menu_component menu_item waitress )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET menus
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

