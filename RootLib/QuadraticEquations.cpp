#include "QuadraticEquations.h"

std::list<double> QuadraticEquations::getRoot()
{
	return roots;
}

double QuadraticEquations::getExtremum()
{
	return E;
}

bool QuadraticEquations::getBranchStatus()
{
	return br;
}

bool QuadraticEquations::getException
()
{
	return exception;
}

double QuadraticEquations::getA()
{
	return a;
}

double QuadraticEquations::getB()
{
	return b;
}

double QuadraticEquations::getC()
{
	return c;
}


QuadraticEquations::QuadraticEquations(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;
	D = b * b - 4 * a * c;
	x = 0;
	E = (0 - b) / (2 * a);
	br = false;
	exception = false;
	if (D == 0)
	{
		roots.push_back(E);
	}
	if (D > 0)
	{
		x = (0 - b - sqrt(D)) / (2 * a);
		roots.push_back(x);
		x = (0 - b + sqrt(D)) / (2 * a);
		roots.push_back(x);
	}
	if (D < 0)
	{
		exception = true;
	}
	a < 0 ? br = false : br = true;
}
