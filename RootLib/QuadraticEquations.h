#pragma once
#include <list>
#include <math.h>
class QuadraticEquations
{
public:
	std::list<double> GetRoot();
	double GetExtremum();
	bool GetBranchStatus();
	bool GetException();
	double GetA();
	double GetB();
	double GetC();
	QuadraticEquations(double A, double B, double C);
private:
	double a, b, c; // a * x^2 + b * x + c = 0
	double D; // discriminant
	double E; // extremum
	double x; // root
	bool br; // 0 - branches of the parabola going down, 1 - branches of the parabola going up
	bool exception; // D < 0
	std::list<double> roots;
};