#include <iostream>
#include "Weapon.hpp"




Weapon::Weapon(std::string _type)
{
    this->_type = _type;
}

const std::string&  Weapon::_getType()  const
{
    return _type;
}

void         Weapon::_setType(std::string _type)
{
    this->_type = _type;
}