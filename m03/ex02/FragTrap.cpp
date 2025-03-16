#include <iostream>
#include <string>
#include "FragTrap.hpp"




FragTrap::FragTrap() : ClapTrap()
{  
        std::cout << "ClapTrap() :  Constructo in FragTrap" << '\n';
}


FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
        std::cout << "init FragTrap cnstructor called" << '\n';
        
        this->_energy_pnts       = 100;
        this->_max_energy_pnts   = 100;
        this->_melee_atk_dmg = 30 ;
        this->_range_atk_dmg = 20 ;
        this->_armor_atk_rdc = 5  ;
}

FragTrap::FragTrap(const FragTrap& _fragTrap)
{
        std::cout << "copy cnstructor called" << '\n';

        this->_name          =  _fragTrap._name;
        this->_energy_pnts   =  _fragTrap._energy_pnts;
        this->_melee_atk_dmg =  _fragTrap._melee_atk_dmg;
        this->_range_atk_dmg =  _fragTrap._range_atk_dmg;
        this->_armor_atk_rdc =  _fragTrap._armor_atk_rdc; 

}



void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if(_energy_pnts < 25 )
    {
        std::cout << "FR4G-TP " << _name << " is out of " 
                  << "energy! No crazy attack this time." << '\n';
       return;
    }

    _energy_pnts-=25;
    
    const char* attacks[5] = {
        "Laser Disco Party",
        "Boomerang Grenade",
        "Clap-in-the-Box",
        "Rubber Ducky Rage",
        "One Shot Wonder"
    };
    

    std::cout << "FR4G-TP " << _name << " uses " 
              << attacks[rand()%5] << "on" << target
              <<", causing chaos!" << '\n';
    
}
