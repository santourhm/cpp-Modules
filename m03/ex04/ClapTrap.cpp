/* ************************************************************************** */
/*                                                                            */
/* *#*#*  #   #  *#*#*  #      #     #    *#*                                 */
/* #   #  #   #  #      #      #*   #*   #   #                                */
/* *#*#*  *#*#*  *#*#*  #      # * # *   *#*#*                                */
/* #      #   #  #      #      #     #   #   #                                */
/* #      #   #  *#*#*  *#*#*  #     #   #   #          By : SANTOURA Hamza   */
/*                                                                            */
/* ************************************************************************** */
/* Tel : +33758985508   | E-mail :     hamza.santoura@phelma.grenoble-inp.fr  */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"







ClapTrap::ClapTrap()
{
        std::cout << "init ClapTrap cnstructor called" << '\n';
        
        this->_hit_pnts      = 100;
        this->_max_hpnts     = 100;
        this->_level_nmbr    = 1  ;
}


ClapTrap::ClapTrap(std::string _name)
{
        std::cout << "init ClapTrap cnstructor called" << '\n';
        
        this->_name          =_name;
        this->_hit_pnts      = 100;
        this->_max_hpnts     = 100;
        this->_level_nmbr    = 1  ;
}

ClapTrap::ClapTrap(const ClapTrap& _ClapTrap)
{
        std::cout << "ClapTrap copy cnstructor called" << '\n';

        this->_name          =  _ClapTrap._name;
        this->_hit_pnts      =  _ClapTrap._hit_pnts;
        this->_max_hpnts     =  _ClapTrap._max_hpnts;
        this->_energy_pnts   =  _ClapTrap._energy_pnts;
        this->_level_nmbr    =  _ClapTrap._level_nmbr;
        this->_melee_atk_dmg =  _ClapTrap._melee_atk_dmg;
        this->_range_atk_dmg =  _ClapTrap._range_atk_dmg;
        this->_armor_atk_rdc =  _ClapTrap._armor_atk_rdc; 

}


ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
    if (this != &other) 
    {
        this->_name          = other._name;
        this->_hit_pnts      = other._hit_pnts;
        this->_max_hpnts     = other._max_hpnts;
        this->_energy_pnts   = other._energy_pnts;
        this->_level_nmbr    = other._level_nmbr;
        this->_melee_atk_dmg = other._melee_atk_dmg;
        this->_range_atk_dmg = other._range_atk_dmg;
        this->_armor_atk_rdc = other._armor_atk_rdc; 
    }

    return *this;
}


/* void ClapTrap::rangedAttack(std::string const & target) const
{
        std::cout << "ClapTrap " << _name << "attacks " 
                  << target << "at range," << " causing "
                  << _range_atk_dmg  << " points of damage!" <<'\n';
        
}



void ClapTrap::meleeAttack(std::string const & target) const
{
        std::cout << "ClapTrap " << _name << "attacks " 
                  << target << "at melee," << " causing "
                  << _melee_atk_dmg  << " points of damage!" <<'\n';
        
}
 */

void ClapTrap::takeDamage(unsigned int amount)
{       
        _hit_pnts-=(unsigned int)(amount/_armor_atk_rdc);
        if(_hit_pnts < 0) {_hit_pnts = 0;}
}


void ClapTrap::beRepaired(unsigned int amount)
{
        _hit_pnts+=(unsigned int)(amount);
        if(_hit_pnts > _max_hpnts) {_hit_pnts = _max_hpnts;}
}


std::string ClapTrap::_getName() const {
        return _name;
    }