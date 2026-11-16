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

    unique_ptr<Animal> dog = make_unique<Dog>();
    dog->callOut();

    cout << endl;

    return 0;
}
