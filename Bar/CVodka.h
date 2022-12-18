#pragma once
#include "CAlcoholDrinkBase.h"
class Vodka :
    public AlcoholDrinkBase
{
public:
    Vodka(double vol);
    double calculateCost();
private:
    const double cost = 120.3;
};

