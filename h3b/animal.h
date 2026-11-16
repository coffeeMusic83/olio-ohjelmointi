#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    Animal();
    virtual ~Animal();        // Lähde: learncpp.com 25.4 Virtual destructors; opettajan materiaali ("Huom!")
    virtual void callOut();   // Lähde: learncpp.com 25.2 Virtual functions and polymorphism
};

#endif