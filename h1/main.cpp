#include <iostream>
#include <stdexcept>

using namespace std;

// Funktiot, jotka laskevat JA tulostavat itse, eivät palauta mitään
void calcSum(int a, int b) {
    int sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
        return;
    }
    double div = static_cast<double>(a) / b;
    cout << a << " / " << b << " = " << div << endl;
}

// Funktiot, jotka palauttavat arvon, eivät tulosta itse
int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    cout << "Anna luku a: ";
    cin >> a;
    cout << "Anna luku b: ";
    cin >> b;

    // Kutsutaan calcSum ja calcDiv -funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan retSum ja retDiv -funktioita
    int sum = retSum(a, b);
    cout << a << " + " << b << " = " << sum << endl;

    try {
        float result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << endl;   // tyhjä rivi ennen ohjelman loppua

    return 0;

}