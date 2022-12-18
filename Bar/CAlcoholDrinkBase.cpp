#include "CAlcoholDrinkBase.h"

AlcoholDrinkBase::AlcoholDrinkBase(double vol) : Drink(vol)
{
	
}

std::string AlcoholDrinkBase::getDrinkType()
{
	return "Алкогольный напиток";
}
