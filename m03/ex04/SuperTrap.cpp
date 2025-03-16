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
#include "SuperTrap.hpp"




SuperTrap::SuperTrap() 
{  
        std::cout << "ClapTrap() :  Constructo in SuperTrap" << '\n';
}


SuperTrap::SuperTrap(std::string _name) : ClapTrap(_name),FragTrap(),NinjaTrap()
{
        this->_hit_pnts     = FragTrap::_hit_pnts;
        this->_max_hpnts    =  FragTrap::_max_hpnts;

        this->_energy_pnts     = NinjaTrap::_energy_pnts;
        this->_max_energy_pnts = NinjaTrap::_max_energy_pnts;

        this->_melee_atk_dmg  = NinjaTrap::_melee_atk_dmg ;
        this->_range_atk_dmg  = FragTrap::_range_atk_dmg;
        this->_armor_atk_rdc  = FragTrap::_armor_atk_rdc;
        
        std::cout << "init SuperTrap cnstructor called" << '\n';
        
}


void SuperTrap::rangedAttack(std::string const & target) const
{
        FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) const
{
        NinjaTrap::meleeAttack(target);
}

