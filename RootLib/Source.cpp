#include <iostream>
#include <list>
#include "QuadraticEquations.h"

void Print(QuadraticEquations F)
{
	if (!F.GetException())
	{
		std::list<double> roots;
		roots = F.GetRoot();
		int i = 1;
		for (double x : roots)
		{
			std::cout << "X" << i << " = " << x << std::endl;
			i++;
		}
		std::cout << "E = " << F.GetExtremum() << std::endl;
		std::cout << "Ветви параболы " << (F.GetBranchStatus() ? "вверх" : "вниз") << std::endl;
		std::cout << "На интервале (-inf, " << F.GetExtremum() << ") " << (F.GetBranchStatus() ? "убывает" : "возрастает") << std::endl;
		std::cout << "На интервале (" << F.GetExtremum() << ", +inf) " << (F.GetBranchStatus() ? "возрастает" : "убывает") << std::endl << std::endl;
	}
	else
		std::cout << "Корней нет"<< std::endl;
}


int main()
{
	QuadraticEquations F1(4, 7, -2);
	QuadraticEquations F2(-4, 7, -2);
	QuadraticEquations F3(1, -6, 9);
	QuadraticEquations F4(1, 4, 29);
	Print(F1);
	Print(F2);
	Print(F3);
	Print(F4);

}