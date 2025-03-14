#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"




HumanB::HumanB(Weapon& _wB,    std::string _name) : _wB(&_wB), _nameB(_name) {};

HumanB::HumanB(std::string _name)  : _nameB(_name) {}          ;


void   HumanB::attack()                    const

{

    std::cout << _nameB << " attacks with this " << _wB->_getType() << std::endl;

}



void           HumanB::setWeapon(Weapon& weapon) {
    this->_wB = &weapon;
}

