#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog() override;
    void callOut() override;  // Lähde: learncpp.com 25.3 The override and final specifiers; peatutor.com #overriding
};

#endif
