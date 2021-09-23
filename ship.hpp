
#include <iostream>
#include <string>
class Ship {
 private:
  int id_;
  std::string name_;
  unsigned speed_;
  unsigned maxCrew_;
  size_t capacity_;
  size_t crew_;

 public:
  Ship() { id_ = -1; }
  Ship(int id, const std::string& name, unsigned speed, unsigned maxCrew,
       size_t capacity, size_t crew)
      : id_(id),
        name_(name),
        speed_(speed),
        maxCrew_(maxCrew),
        capacity_(capacity),
        crew_(crew) {}

  Ship(int ajdi, unsigned speedo, unsigned maxCrewo)
      : Ship(ajdi, "black pearl", speedo, maxCrewo, 10, 50) {}

  void setName(const std::string& name) ;

  Ship& operator+=(const int a) {
    crew_ += a;
    //std::cout << "Ram memory extended\n";
    return *this;
  }

  Ship& operator-=(const int b) {
    crew_ -= b;
    //std::cout << "Ram memory extended\n";
    return *this;
  }

  unsigned getCrew() const { return crew_; }
};