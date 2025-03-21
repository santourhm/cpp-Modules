#include "Otter.hpp"
#include <iostream>

Otter::Otter(const std::string& name) 
    : Victim(name) {
    std::cout << "Splash splash!" << std::endl;
}

Otter::~Otter() {
    std::cout << "Splash... splash..." << std::endl;
}

Otter::Otter(const Otter& other) 
    : Victim(other) {
    std::cout << "Splash splash!" << std::endl;
}

Otter& Otter::operator=(const Otter& other) {
    if (this != &other) {
        Victim::operator=(other);
    }
    return *this;
}

void Otter::getPolymorphed() const {
    std::cout << _getName() << " has been turned into a playful dolphin!" << std::endl;
}