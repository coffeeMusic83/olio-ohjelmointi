#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

// ItalianChef perii Chef-luokan (UML:n kolmionuoli)
// Lähde: learncpp.com 24.2 Basic inheritance in C++; opettajan materiaali (UML-luokkakaavio)
class ItalianChef : public Chef
{
public:
    ItalianChef(std::string name);
    ~ItalianChef();

    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
