#include <iostream>
#include "CAlcoholDrinkBase.h"
#include "CVodka.h"
#include "CJuice.h"
#include "COtvertka.h"

int main()
{
    Vodka vodka(5);
    Juice juice(10);

    Otvertka otvertka = Otvertka(vodka, juice);

    std::cout << "Стоимость коктейля - " << otvertka.calculateCost() << std::endl;
    std::cout << "Объем коктейля - " << otvertka.getVol() << std::endl;
    std::cout << "Тип напитка - " << otvertka.getDrinkType() << std::endl;
}