#include "Cargo.hpp"
#include <string>
class Alcohol : public Cargo{


    private: 
    size_t spirytProcent;


    public:

    size_t getPrice() const override; 
    std::string getName() const override;
    size_t getAmount() const override ;
    size_t getBasePrice() const override ;

};