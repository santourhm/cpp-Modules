#ifndef OTTER_HPP
#define OTTER_HPP

#include "Victim.hpp"

class Otter : public Victim {
public:
    Otter(const std::string& name);
    ~Otter();

    Otter(const Otter& other);
    Otter& operator=(const Otter& other);

    void getPolymorphed() const override;
};

#endif