#pragma once
#include "CAlcoholDrinkBase.h"
#include "CVodka.h"
#include "CJuice.h"
class Otvertka :
    public AlcoholDrinkBase
{
public:
    Otvertka(Vodka vodka, Juice juice);
    double calculateCost();
private:
    double cost;
};

