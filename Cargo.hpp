

#include <string>
class Cargo {
private:
    std::string name_;
    size_t amount_;
    double basePrice_;

public:
    Cargo& operator+=(const size_t amount)
    {
        amount_ += amount;
        return *this;
    }

    Cargo& operator-=(const size_t amount)
    {
        amount_ -= amount;
        return *this;
    }
};