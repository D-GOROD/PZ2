#pragma once
#include <list>
#include <math.h>
class QuadraticEquations
{
public:
	QuadraticEquations(double A, double B, double C);
	std::list<double> getRoot();
	double getExtremum();
	bool getBranchStatus();
	bool getException();
	double getA();
	double getB();
	double getC();
private:
	double a, b, c; // a * x^2 + b * x + c = 0
	double D; // discriminant
	double E; // extremum
	double x; // root
	bool br; // 0 - branches of the parabola going down, 1 - branches of the parabola going up
	bool exception; // D < 0
	std::list<double> roots;
};