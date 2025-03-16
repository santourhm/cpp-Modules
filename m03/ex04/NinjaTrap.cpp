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
#include "NinjaTrap.hpp"




NinjaTrap::NinjaTrap() :  ClapTrap()
{  
        std::cout << "ClapTrap() :  Constructo in NinjaTrap" << '\n';
        this->_energy_pnts = 120;
        this->_max_energy_pnts = 120;
        this->_melee_atk_dmg  = 60 ;


}


NinjaTrap::NinjaTrap(std::string _name) : ClapTrap(_name)
{
        std::cout << "init NinjaTrap cnstructor called" << '\n';
                
        this->_hit_pnts      = 60;
        this->_max_hpnts     = 60;
        this->_energy_pnts       = 120;
        this->_max_energy_pnts   = 120;
        this->_melee_atk_dmg = 60 ;
        this->_range_atk_dmg = 5 ;
        this->_armor_atk_rdc = 0  ;

}

NinjaTrap::NinjaTrap(const NinjaTrap& _NinjaTrap)
{
        std::cout << "copy cnstructor called" << '\n';

        this->_name          =  _NinjaTrap._name;
        this->_energy_pnts   =  _NinjaTrap._energy_pnts;
        this->_melee_atk_dmg =  _NinjaTrap._melee_atk_dmg;
        this->_range_atk_dmg =  _NinjaTrap._range_atk_dmg;
        this->_armor_atk_rdc =  _NinjaTrap._armor_atk_rdc; 

}


void NinjaTrap::ninjaShoebox(ClapTrap& target) {
        std::cout << "NinjaTrap "      << _name << " sneaks up on ClapTrap "
                  << target._getName() << " and throws a shuriken!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& target) {
         std::cout << "NinjaTrap "      << _name << " uses a smoke bomb to confuse FragTrap "
                   << target._getName() << " and disappears!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& target) {
        std::cout << "NinjaTrap "      << _name << " challenges ScavTrap "
                  << target._getName() << " to a duel and wins effortlessly!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& target) {
        std::cout << "NinjaTrap " << _name << " engages in a silent battle with NinjaTrap "
                  << target._name << " and they both vanish into the shadows!" << std::endl;
}


void NinjaTrap::rangedAttack(std::string const & target) const 
{
        std::cout << "NJ4G-TP "            << _name << "attacks " 
                  << target << "at range," << " causing "
                  << _range_atk_dmg        << " points of damage!" <<'\n';
        
}


void NinjaTrap::meleeAttack(std::string const & target) const
{
        std::cout << "NJ4G-TP "            << _name << "attacks " 
                  << target << "at melee," << " causing "
                  << _melee_atk_dmg        << " points of damage!" <<'\n';
        
}
