#ifndef CAR_H
#define CAR_H

#include <string>
#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
public:
    Car();
    Car(string model, string brand);

    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string model);
    string getBrand();
    void setBrand(string brand);
    void printDetails();

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
};

#endif // CAR_H
