#include "Cargo.hpp"
#include <string>
class Item : public Cargo{


    private: 
    
    enum class rarity { common, rare, epic, legendary };
    int num ;
    public:
    Item()
    {
        num = static_cast<int>(rarity::common);
    }
    size_t getPrice() const override; 
    std::string getName() const override;
    size_t getAmount() const override ;
    size_t getBasePrice() const override ;

   
};