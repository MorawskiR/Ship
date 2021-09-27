#include "Cargo.hpp"
#include <string>
class Fruit : public Cargo{

protected:
    std::string name_;
    size_t amount_;
    double basePrice_;
    double price_;

private: 

    size_t spoilTime_;


    public:

 Fruit(std::string name, int amount, double basePrice, double price, size_t timeToSpoil);

    size_t getPrice() const override; 
    std::string getName() const override;
    size_t getAmount() const override ;
    size_t getBasePrice() const override ;

    Fruit& operator--();
};