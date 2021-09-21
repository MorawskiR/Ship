
#include <iostream>

#include "ship.hpp"
int main() {

  Ship ferry{};

  std::cout << ferry.getCrew() << "\n";
  ferry += 10;
}