
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${pizzafm_SOURCE_DIR}/include)

# Adds a library called pizzafm (libpizzafm.a under Linux) from the source
# files under lib/
ADD_LIBRARY( pizzafm
  chicago_style_clam_pizza ny_pizza_store ny_style_pepperoni_pizza pizza_store
  chicago_pizza_store chicago_style_pepperoni_pizza ny_style_cheese_pizza
  ny_style_veggie_pizza chicago_style_cheese_pizza chicago_style_veggie_pizza
  ny_style_clam_pizza pizza )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET pizzafm
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

