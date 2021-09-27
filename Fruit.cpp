
#include "Fruit.hpp"

Fruit& Fruit::operator--()
{
    spoilTime_--;
    return *this;
}
   
    Fruit:: Fruit(std::string name, int amount, double basePrice, double price, size_t timeToSpoil)
        : Cargo( name, amount,basePrice, price),
          spoilTime_(timeToSpoil)
        {}

    size_t Fruit::getPrice() const  { return price_ - spoilTime_;}
    std::string Fruit::getName() const  { return name_;}
    size_t Fruit::getAmount() const  {return amount_;}
    size_t Fruit::getBasePrice() const  {return basePrice_;}