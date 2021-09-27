#include "Cargo.hpp"
#include <string>
class Alcohol : public Cargo{


private: 
    size_t spirytProcent_;


public:

    Alcohol(std::string name, int amount, double basePrice, double price, size_t spirytProcent_);

    size_t getPrice() const override; 
    std::string getName() const override;
    size_t getAmount() const override ;
    size_t getBasePrice() const override ;

};