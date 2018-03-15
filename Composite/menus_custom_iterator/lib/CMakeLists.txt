
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${menuscustomiterator_SOURCE_DIR}/include)

# Adds a library called menuscustomiterator (libmenuscustomiterator.a under Linux) from the source files under lib/
ADD_LIBRARY( menuscustomiterator 
  menu menu_item unsupported_operation_exception waitress menu_component menu_iterator )
  
foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET menuscustomiterator
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

