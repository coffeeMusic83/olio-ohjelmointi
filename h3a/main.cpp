#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Omat lohkot { }, jotta Gordonin destruktori ajetaan ennen kuin Anthony luodaan
    // Rakentamis- ja purkujärjestys: learncpp.com 24.3 Order of construction of derived classes
    {
        Chef chef("Gordon Ramsay");     // automaattinen olio (pinomuisti)
        chef.makeSalad();
        chef.makeSoup();
    }

    {
        ItalianChef italianChef("Anthony Bourdain");
        italianChef.makeSalad();
        italianChef.makeSoup();
        italianChef.makePasta();
        cout << "name of the Italian Chef is " << italianChef.getName() << endl;
    }

    return 0;
}
