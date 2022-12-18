#pragma once
#include "CSoftDrink.h"
class Juice :
    public SoftDrink
{
public:
    Juice(double vol);
    double calculateCost();
private:
    double cost = 70.99;
};

