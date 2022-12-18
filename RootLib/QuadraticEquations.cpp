#include "QuadraticEquations.h"

std::list<double> QuadraticEquations::GetRoot()
{
	return roots;
}

double QuadraticEquations::GetExtremum()
{
	return E;
}

bool QuadraticEquations::GetBranchStatus()
{
	return br;
}

bool QuadraticEquations::GetException()
{
	return exception;
}

double QuadraticEquations::GetA()
{
	return a;
}

double QuadraticEquations::GetB()
{
	return b;
}

double QuadraticEquations::GetC()
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
