
#include <iostream>
#include <vector>
#include "ship.hpp"
#include "Fruit.hpp"
#include "Alcohol.hpp"
#include "Item.hpp"
#include "Cargo.hpp"
int main() {

  Ship ferry{};

  ferry += 10;
  
  std::vector<Cargo*> cargo;

  Fruit("Banana", 20, 100, 30, 5);
  Alcohol("Beer", 25,30,40,20);
  Item("Barell", 10, 20, 6, 1);


}