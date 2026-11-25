#include "car.h"

int main()
{
    Car myCar("Corolla", "Toyota");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();
    return 0;
}

/*
Lähteet:
- Opettajan materiaali: Olio-ohjelmointi, Harjoitus 4 (kompositio)
- https://www.learncpp.com/cpp-tutorial/composition/
- Claude (Anthropic) – apuna koodin selityksessä ja virheiden korjauksessa
*/

