#include <iostream>
#include <memory>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    unique_ptr<Animal> animal = make_unique<Animal>();
    animal->callOut();

    cout << endl;

    // Polymorfinen olio kantaluokan tyyppisen älyosoittimen kautta
    // Lähde: opettajan materiaali (Polymorfismi luokkien Animal ja Dog välillä);
    // learncpp.com 25.1 Pointers and references to the base class of derived objects
    unique_ptr<Animal> dog = make_unique<Dog>();
    dog->callOut();

    cout << endl;

    return 0;
}
