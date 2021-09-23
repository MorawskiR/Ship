
#include "Fruit.hpp"

Fruit& Fruit::operator--()
{
    spoilTime--;
    return *this;
}

    size_t Fruit::getPrice() const  { return price_ - spoilTime;}
    std::string Fruit::getName() const  { return name_;}
    size_t Fruit::getAmount() const  {return amount_;}
    size_t Fruit::getBasePrice() const  {return basePrice_;}