#include "Sheep.hpp"
#include <iostream>


Sheep::Sheep(const std::string& name) 
    : Victim(name) {
    std::cout << "Baa baa!" << std::endl;
}

Sheep::~Sheep() {
    std::cout << "Baa... baa..." << std::endl;
}

Sheep::Sheep(const Sheep& other) 
    : Victim(other) {
    std::cout << "Baa baa!" << std::endl;
}

Sheep& Sheep::operator=(const Sheep& other) {
    if (this != &other) {
        Victim::operator=(other);
    }
    return *this;
}

void Sheep::getPolymorphed() const {
    std::cout << _getName() << " has been turned into a fluffy cloud!" << std::endl;
}