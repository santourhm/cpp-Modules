#include <iostream>
#include <string>
#include "ScavTrap.hpp"







ScavTrap::ScavTrap(std::string _name)
{
        std::cout << "init ScavTrap cnstructor called" << '\n';
        
        this->_name          = _name;
        this->_hit_pnts      = 100;
        this->_max_hpnts     = 100;
        this->_energy_pnts   = 100;
        this->_level_nmbr    = 1  ;
        this->_melee_atk_dmg = 30 ;
        this->_range_atk_dmg = 20 ;
        this->_armor_atk_rdc = 5  ;
}

ScavTrap::ScavTrap(const ScavTrap& _ScavTrap)
{
        std::cout << "ScavTrap copy cnstructor called" << '\n';

        this->_name          =  _ScavTrap._name;
        this->_hit_pnts      =  _ScavTrap._hit_pnts;
        this->_max_hpnts     =  _ScavTrap._max_hpnts;
        this->_energy_pnts   =  _ScavTrap._energy_pnts;
        this->_level_nmbr    =  _ScavTrap._level_nmbr;
        this->_melee_atk_dmg =  _ScavTrap._melee_atk_dmg;
        this->_range_atk_dmg =  _ScavTrap._range_atk_dmg;
        this->_armor_atk_rdc =  _ScavTrap._armor_atk_rdc; 

}

void ScavTrap::rangedAttack(std::string const & target) const
{
        std::cout << "SC4V-TP  " << _name << "attacks " 
                  << target << "at range," << " causing "
                  << _range_atk_dmg  << " points of damage!" <<'\n';
        
}



void ScavTrap::meleeAttack(std::string const & target) const
{
        std::cout << "SC4V-TP " << _name << "attacks " 
                  << target << "at melee," << " causing "
                  << _melee_atk_dmg  << " points of damage!" <<'\n';
        
}


void ScavTrap::takeDamage(unsigned int amount)
{       
        _hit_pnts-=(int)(amount/_armor_atk_rdc);
        if(_hit_pnts < 0) {_hit_pnts = 0;}
}


void ScavTrap::beRepaired(unsigned int amount)
{
        _hit_pnts+=(int)(amount);
        if(_hit_pnts > _max_hpnts) {_hit_pnts = _max_hpnts;}
}

void ScavTrap::challengeNewcomer() const 
{


    const char* challenges[5] = {
        "Solve this Rubik's Cube blindfolded",
        "Name five Pokémon in 10 seconds!",
        "Recite the digits of π to 20 decimal places!",
        "Win a staring contest against me!",
        "Do the chicken dance for 30 seconds!"
    };

    std::cout << "SC4V-TP " << _name << " challenges you: "
              << challenges[rand() % 5] << std::endl;
    
}
