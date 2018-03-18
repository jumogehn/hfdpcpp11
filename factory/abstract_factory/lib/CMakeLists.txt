
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${pizzaaf_SOURCE_DIR}/include)

# Adds a library called pizzaaf (libpizzaaf.a under Linux) from the source
# files under lib/
ADD_LIBRARY( pizzaaf
  black_olives dough ny_pizza_ingredient_factory pizza_store thin_crust_dough
  egg_plant ny_pizza_store plum_tomato_sauce
  cheese fresh_clams onion red_pepper veggie_pizza
  cheese_pizza frozen_clams parmesan_cheese reggiano_cheese veggies
  chicago_pizza_ingredient_factory garlic pepperoni sauce
  chicago_pizza_store marinara_sauce pepperoni_pizza sliced_pepperoni
  clam_pizza mozzarella_cheese pizza spinach
  clams mushroom pizza_ingredient_factory thick_crust_dough )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET pizzaaf
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

