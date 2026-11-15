#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef
{
public:
    Chef(std::string name);
    virtual ~Chef();

    void makeSalad();
    void makeSoup();

protected:
    // protected (# UML-kaaviossa): aliluokka ItalianChef pääsee käsiksi suoraan
    std::string name;
};

#endif // CHEF_H
