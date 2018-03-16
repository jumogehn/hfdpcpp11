//===--- menus.cpp - --------------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "menu.hpp"
#include "menu_component.hpp"
#include "menu_item.hpp"
#include "waitress.hpp"


int main( int argc, char* argv[] ) {
  std::unique_ptr< MenuComponent > 
    pancake_house_menu (new Menu( "PANCAKE HOUSE MENU", "Breakfast" ));
  std::unique_ptr< MenuComponent >
    diner_menu (new Menu( "DINER MENU", "Lunch" ));
  std::unique_ptr< MenuComponent >
    cafe_menu (new Menu( "CAFE MENU", "Dinner" ));
  std::unique_ptr< MenuComponent >
    dessert_menu (new Menu( "DESSERT MENU", "Dessert of course!" ));
  std::unique_ptr< MenuComponent >
    coffee_menu (new Menu( "COFFEE MENU", "Stuff to go with your afternoon coffee" ));
  std::unique_ptr< MenuComponent >
    all_menus (new Menu( "ALL MENUS", "All menus combined" ));

  all_menus->Add( pancake_house_menu.get() );
  all_menus->Add( diner_menu.get() );
  all_menus->Add( cafe_menu.get() );

  pancake_house_menu->Add( new MenuItem(
      "K&B's Pancake Breakfast",
      "Pancakes with scrambled eggs, and toast",
      true,
      2.99) );
  pancake_house_menu->Add( new MenuItem(
      "Regular Pancake Breakfast",
      "Pancakes with fried eggs, sausage",
      false,
      2.99) );
  pancake_house_menu->Add( new MenuItem(
      "Blueberry Pancakes",
      "Pancakes made with fresh blueberries, and blueberry syrup",
      true,
      3.49) );
  pancake_house_menu->Add( new MenuItem(
      "Waffles",
      "Waffles, with your choice of blueberries or strawberries",
      true,
      3.59) );
  diner_menu->Add( new MenuItem(
      "Vegetarian BLT",
      "(Fakin') Bacon with lettuce & tomato on whole wheat",
      true,
      2.99) );
  diner_menu->Add( new MenuItem(
      "BLT",
      "Bacon with lettuce & tomato on whole wheat",
      false,
      2.99) );
  diner_menu->Add( new MenuItem(
      "Soup of the day",
      "A bowl of the soup of the day, with a side of potato salad",
      false,
      3.29) );
  diner_menu->Add( new MenuItem(
      "Hotdog",
      "A hot dog, with saurkraut, relish, onions, topped with cheese",
      false,
      3.05) );
  diner_menu->Add( new MenuItem(
      "Steamed Veggies and Brown Rice",
      "Steamed vegetables over brown rice",
      true,
      3.99) );
  diner_menu->Add( new MenuItem(
      "Pasta",
      "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
      true,
      3.89) );

  diner_menu->Add( dessert_menu.get() );

  dessert_menu->Add( new MenuItem(
      "Apple Pie",
      "Apple pie with a flakey crust, topped with vanilla icecream",
      true,
      1.59) );
  dessert_menu->Add( new MenuItem(
      "Cheesecake",
      "Creamy new York cheesecake, with a chocolate graham crust",
      true,
      1.99) );
  dessert_menu->Add( new MenuItem(
      "Sorbet",
      "A scoop of raspberry and a scoop of lime",
      true,
      1.89) );
  cafe_menu->Add( new MenuItem(
      "Veggie Burger and Air Fries",
      "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
      true,
      3.99) );
  cafe_menu->Add( new MenuItem(
      "Soup of the day",
      "A cup of the soup of the day, with a side salad",
      false,
      3.69) );
  cafe_menu->Add( new MenuItem(
      "Burrito",
      "A large burrito, with whole pinto beans, salsa, guacamole",
      true,
      4.29) );

  cafe_menu->Add( coffee_menu.get() );

  coffee_menu->Add( new MenuItem(
      "Coffee Cake",
      "Crumbly cake topped with cinnamon and walnuts",
      true,
      1.59) );
  coffee_menu->Add( new MenuItem(
      "Bagel",
      "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin",
      false,
      0.69) );
  coffee_menu->Add( new MenuItem(
      "Biscotti",
      "Three almond or hazelnut biscotti cookies",
      true,
      0.89) );

  std::unique_ptr<Waitress>
    waitress (new Waitress(all_menus.get() ));
  waitress->PrintMenu();

  return 0;
}
