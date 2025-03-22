#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine();
    virtual ~TacticalMarine();

    TacticalMarine& operator=(const TacticalMarine& other);

    ISpaceMarine* clone() const override;
    void battleCry() const override;
    void rangedAttack() const override;
    void meleeAttack() const override;
};

#endif