#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator();
    virtual ~AssaultTerminator();

    AssaultTerminator& operator=(const AssaultTerminator& other);

    ISpaceMarine* clone() const override;
    void battleCry() const override;
    void rangedAttack() const override;
    void meleeAttack() const override;
};

#endif