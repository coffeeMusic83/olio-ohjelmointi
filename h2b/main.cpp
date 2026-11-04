#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    // Luodaan vektori pinoon
    vector<Car> carList;

    // Lisätään kolme autoa listaan
    carList.emplace_back("Toyota", "Corolla", 2018);
    carList.emplace_back("Volvo", "V70", 2012);
    carList.emplace_back("Skoda", "Octavia", 2021);

    // Listan toisen alkion tiedot (indeksi 1, koska numerointi alkaa nollasta)
    cout << "Listan toinen auto:" << endl;
    carList[1].printData();
    cout << endl;

    // Kaikkien autojen tiedot for-silmukalla
    cout << "Kaikki autot:" << endl;
    for (const Car &car : carList) {
        car.printData();
    }

    cout << endl;
    return 0;
}