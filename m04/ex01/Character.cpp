#include "Character.hpp"
#include <iostream>




Character::Character(const std::string& _name) 
    : _name(_name), _ap(40), _weapon(nullptr) {}

Character::~Character() {}

Character::Character(const Character& other) 
    : _name(other._name), _ap(other._ap), _weapon(other._weapon) {}

Character& Character::operator=(const Character& other)
{
    if (this != &other) {
        _name = other._name;
        _ap = other._ap;
        _weapon = other._weapon;
    }
    return *this;
}


void Character::recoverAP() 
{
    _ap += 10;
    if (_ap > 40) {
        _ap = 40;
    }
}


void Character::equip(AWeapon* weapon) 
{
    this->_weapon = weapon;
}


void Character::attack(Enemy* enemy)
{

    if (_weapon && _ap >= _weapon->getAPCost()) 
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        _ap -= _weapon->getAPCost();
        if (enemy->getHP() <= 0) 
        {
            delete enemy;
        }
    }
}

std::string Character::getName() const {
    return _name;
}

int Character::getAP() const {
    return _ap;
}

AWeapon* Character::getWeapon() const {
    return _weapon;
}


std::ostream& operator<<(std::ostream& o, const Character& c) 
{
    if (c.getWeapon()) 
    {
        o << c.getName() << " has " << c.getAP() 
        << " AP and wields a " << c.getWeapon()->getName() << std::endl;
    } 
    else 
    {
        o << c.getName() << " has " << c.getAP() 
        << " AP and is unarmed" << std::endl;
    }
    return o;
}