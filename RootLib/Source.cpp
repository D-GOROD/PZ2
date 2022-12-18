#include <iostream>
#include <list>
#include <algorithm>
#include "QuadraticEquations.h"

void print(std::list<QuadraticEquations> functionsCollections)
{
	for (QuadraticEquations F : functionsCollections) {
		std::cout << F.getA() << "*x^2 " << (F.getB() > 0 ? "+":"") << F.getB() << "*x " << (F.getC() > 0 ? "+" : "") << F.getC() << " = 0" << std::endl;
		if (!F.getException())
		{
			std::list<double> roots;
			roots = F.getRoot();
			int i = 1;
			for (double x : roots)
			{
				std::cout << "X" << i << " = " << x << std::endl;
				i++;
			}
			std::cout << "E = " << F.getExtremum() << std::endl;
			std::cout << "Ветви параболы " << (F.getBranchStatus() ? "вверх" : "вниз") << std::endl;
			std::cout << "На интервале (-inf, " << F.getExtremum() << ") " << (F.getBranchStatus() ? "убывает" : "возрастает") << std::endl;
			std::cout << "На интервале (" << F.getExtremum() << ", +inf) " << (F.getBranchStatus() ? "возрастает" : "убывает") << std::endl << std::endl;
		}
		else
			std::cout << "Корней нет" << std::endl;
	}
}

void printMaxMinRoots(std::list<QuadraticEquations> functionsCollections)
{
	std::list<double> roots;
	for (QuadraticEquations F : functionsCollections)
	{
		auto iter = F.getRoot();
		roots.insert(roots.cbegin(), iter.begin(), iter.end());
	}
	auto max = *std::max_element(roots.begin(), roots.end());
	auto min = *std::min_element(roots.begin(), roots.end());
	std::cout << "\nМинимальный корень - X = " << min << std::endl;
	std::cout << "\nМаксимальный корень - X = " << max << std::endl;
}


int main()
{
	std::list<QuadraticEquations> functionsCollections;
	functionsCollections.push_back(QuadraticEquations(4, 7, -2));
	functionsCollections.push_back(QuadraticEquations(-4, 7, -2));
	functionsCollections.push_back(QuadraticEquations(1, -6, 9));
	functionsCollections.push_back(QuadraticEquations(1, 4, 29));
	print(functionsCollections);
	printMaxMinRoots(functionsCollections);
}