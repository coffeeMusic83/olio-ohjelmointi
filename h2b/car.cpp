#include "car.h"
#include <iostream>

using namespace std;

Car::Car(string brand, string model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel)
{
}

void Car::printData() const
{
    cout << brand << " " << model << ", vuosimalli " << yearModel << endl;
}
