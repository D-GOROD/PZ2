#include "COtvertka.h"

Otvertka::Otvertka(Vodka vodka, Juice juice) : AlcoholDrinkBase(vodka.getVol() + juice.getVol())
{
	cost = vodka.calculateCost() + juice.calculateCost();
}

double Otvertka::calculateCost()
{
	return cost;
}
