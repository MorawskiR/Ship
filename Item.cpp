

#include "Item.hpp"


    size_t Item::getPrice() const  { 

    rarity e = rarity::common;
        if (e == rarity::epic)
        {
            return price_ * 1;
        }
        else if(e == rarity::epic) 
        {
            return price_ * 2; 
        }
        else if(e == rarity::legendary)
        {
             return price_ * 3 ;
        }
        else
        {
            return price_ * 4;
        }
    }

    std::string Item::getName() const  { return name_;}
    size_t Item::getAmount() const  {return amount_;}
    size_t Item::getBasePrice() const  {return basePrice_;}

    Item::Item(std::string name, int amount, double basePrice, double price, rarity r) :
         Cargo( name, amount,basePrice, price), enumField_(r) {}

