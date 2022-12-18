#pragma once
#include "CDrink.h"
class SoftDrink :
    public Drink
{
public:
    SoftDrink(double vol);
    std::string getDrinkType() override;
protected:
    double softDrinkTax = 1;
};

