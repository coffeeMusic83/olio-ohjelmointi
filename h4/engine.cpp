#include "engine.h"

Engine::Engine() : horsepower(0), displacement(0.0) {}

Engine::Engine(int horsepower, double displacement)
    : horsepower(horsepower), displacement(displacement) {}

int Engine::getHorsepower() { return horsepower; }
void Engine::setHorsepower(int horsepower) { this->horsepower = horsepower; }

double Engine::getDisplacement() { return displacement; }
void Engine::setDisplacement(double displacement) { this->displacement = displacement; }
