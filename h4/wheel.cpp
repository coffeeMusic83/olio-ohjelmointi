#include "wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int size, string type) : size(size), type(type) {}

int Wheel::getSize() {return size; }
void Wheel::setSize(int size) { this->size = size; }

string Wheel::getType() { return type; }
void Wheel::setType(string type) { this->type = type; }


