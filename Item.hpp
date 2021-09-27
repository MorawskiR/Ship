#include "Cargo.hpp"
#include <string>
class Item : public Cargo{


private:  
    enum class rarity { common, rare, epic, legendary };
    rarity enumField_;
public:

    Item(std::string name, int amount, double basePrice, double price, rarity r);


    size_t getPrice() const override; 
    std::string getName() const override;
    size_t getAmount() const override ;
    size_t getBasePrice() const override ;

   
};