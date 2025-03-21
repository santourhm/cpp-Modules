#ifndef SHEEP_HPP
#define SHEEP_HPP

#include "Victim.hpp"

class Sheep : public Victim {
public:
    Sheep(const std::string& name);
    ~Sheep();

    Sheep(const Sheep& other);
    Sheep& operator=(const Sheep& other);

    void getPolymorphed() const override;
};

#endif