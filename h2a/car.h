#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
    void printData();
    void setBrand(std::string newBrand);
    void setModel(std::string newModel);
    void setYearModel(int newYearModel);

private:
    std::string brand;
    std::string model;
    int yearModel = 0;
};

#endif // CAR_H