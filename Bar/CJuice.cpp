#include "CJuice.h"

Juice::Juice(double vol) :SoftDrink(vol)
{
}

double Juice::calculateCost()
{
	return cost * this->getVol() + this->softDrinkTax;
}
