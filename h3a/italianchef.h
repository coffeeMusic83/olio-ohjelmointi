#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

// ItalianChef perii Chef-luokan (UML:n kolmionuoli)
class ItalianChef : public Chef
{
public:
    ItalianChef(std::string name);
    ~ItalianChef();

    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
