#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // Car pinomuistiin
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2018);
    car.printData();
    cout << endl;

    // Rectangle kekomuistiin
    Rectangle* rect = new Rectangle;
    rect->setWidth(4.5);
    rect->setHeight(2.0);
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ymparysmitta: " << rect->getCircum() << endl;
    delete rect;
    rect = nullptr;
    cout << endl;

    // Student smart pointerilla
    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Heidi");
    student->setStudentNumber(123456);
    student->setAverage(4.2);
    cout << "Nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;
    cout << endl;

    return 0;
}