#include "ship.hpp"

#include <iostream>
#include <string>


  Ship::Ship(int id, const std::string& name, unsigned speed, unsigned maxCrew, std::size_t capacity, std::size_t crew)
      : id_(id),
        name_(name),
        speed_(speed),
        maxCrew_(maxCrew),
        capacity_(capacity),
        crew_(crew) {}

  Ship::Ship(int ajdi, unsigned speedo, unsigned maxCrewo)
      : Ship(ajdi, "black pearl", speedo, maxCrewo, 10, 50) {}

  void Ship::setName(const std::string& name) { name_ = name; }


Ship& Ship::operator+=(const int a) {
    crew_ += a;
    return *this;
  }

Ship& Ship::operator-=(const int b) {
    crew_ -= b;
    return *this;
  }