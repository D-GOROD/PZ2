#pragma once
#include <string>
class Drink
{
public:
	Drink(double vol);
	double getVol();
	virtual double calculateCost() = 0;
	virtual std::string getDrinkType() = 0;
private:
	double vol;
};

