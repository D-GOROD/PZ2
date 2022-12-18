#pragma once
#include "CDrink.h"
class AlcoholDrinkBase :
    public Drink
{
public:
    AlcoholDrinkBase(double vol);
    std::string getDrinkType() override;
protected:
    const double alcoholTax = 10;
};

