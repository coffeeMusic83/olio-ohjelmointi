#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel
{
public:
    Wheel();
    Wheel(int size, string type);

    int getSize();
    void setSize(int size);
    string getType();
    void setType(string type);

private:
    int size;
    string type;
};

#endif // WHEEL_H
