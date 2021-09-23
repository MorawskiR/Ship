

#include "Item.hpp"


    size_t Item::getPrice() const  { 

    rarity e = rarity::common;
    if (e == rarity::epic)
    {
        return price_ * 1;
    }
        return price_ * 2; 
    }
    std::string Item::getName() const  { return name_;}
    size_t Item::getAmount() const  {return amount_;}
    size_t Item::getBasePrice() const  {return basePrice_;}