#include "CSoftDrink.h"

SoftDrink::SoftDrink(double vol) : Drink(vol)
{
}

std::string SoftDrink::getDrinkType()
{
	return "Безалкогольный напиток";
}
