
#include "Alcohol.hpp"



    size_t Alcohol::getPrice() const  { return price_ * spirytProcent;}
    std::string Alcohol::getName() const  { return name_;}
    size_t Alcohol::getAmount() const  {return amount_;}
    size_t Alcohol::getBasePrice() const  {return basePrice_;}