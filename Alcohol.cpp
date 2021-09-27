
#include "Alcohol.hpp"



    Alcohol::Alcohol(std::string name, int amount, double basePrice, double price, size_t spirytProcent):
     Cargo( name, amount,basePrice, price), spirytProcent_(spirytProcent) {}

    size_t Alcohol::getPrice() const  { return price_ * spirytProcent_;}
    std::string Alcohol::getName() const  { return name_;}
    size_t Alcohol::getAmount() const  {return amount_;}
    size_t Alcohol::getBasePrice() const  {return basePrice_;}