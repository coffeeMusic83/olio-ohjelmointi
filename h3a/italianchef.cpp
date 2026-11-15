#include "italianchef.h"
#include <iostream>

using namespace std;

// Kantaluokan muodostin kutsutaan alustuslistassa, koska Chef tarvitsee nimen
ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << " makes pasta" << endl;
}
