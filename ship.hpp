
#include <iostream>
#include <string>

class Ship {
  
 private:
  int id_;
  std::string name_;
  unsigned speed_;
  unsigned maxCrew_;
  std::size_t capacity_;
  std::size_t crew_;

 public:
  Ship() { id_ = -1; }
  Ship(int id, const std::string& name, unsigned speed, unsigned maxCrew, std::size_t capacity, std::size_t crew);

  Ship(int ajdi, unsigned speedo, unsigned maxCrewo);

  void setName(const std::string& name) ;

  Ship& operator+=(const int a);

  Ship& operator-=(const int b);

  unsigned getCrew() const { return crew_; }
};