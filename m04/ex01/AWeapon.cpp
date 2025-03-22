#include "AWeapon.hpp"






AWeapon::AWeapon(const AWeapon& weapon)
{
        this->_name = weapon._name;
        this->_damage = weapon._damage;
        this->_apcost = weapon._apcost;
}

AWeapon& AWeapon::operator=(const AWeapon& weapon)
{
        if(this!=&weapon)
        {

            this->_name = weapon._name;
            this->_damage = weapon._damage;
            this->_apcost = weapon._apcost;

        }

        return *this;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
        this->_name = name;
        this->_damage = damage;
        this->_apcost = apcost;
}




std::string   AWeapon::getName() const 
{
        return _name;
}

int          AWeapon::getAPCost() const
{
        return _apcost;
}

int          AWeapon::getDamage() const
{
        return _damage;
}
