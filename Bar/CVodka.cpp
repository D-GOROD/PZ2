#include "CVodka.h"

Vodka::Vodka(double vol) : AlcoholDrinkBase(vol)
{
}

double Vodka::calculateCost()
{
	return cost * this->getVol() + this->alcoholTax;
}
