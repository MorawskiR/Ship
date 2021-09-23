

#include <string>
class Cargo {
protected:
    std::string name_;
    size_t amount_;
    double basePrice_;
    double price_;

public:

    virtual size_t getPrice() const = 0;
    virtual std::string getName() const = 0;
    virtual size_t getAmount() const = 0;
    virtual size_t getBasePrice() const = 0;


    Cargo& operator+=(const size_t amount);

    Cargo& operator-=(const size_t amount);
};