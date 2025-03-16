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
#include "ScavTrap.hpp"




ScavTrap::ScavTrap() : ClapTrap()
{  
        std::cout << "ClapTrap() :  Constructo in ScavTrap" << '\n';
}


ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
        std::cout << "init ScavTrap cnstructor called" << '\n';
        
        this->_energy_pnts   = 50;
        this->_max_energy_pnts   = 50;
        this->_melee_atk_dmg = 20 ;
        this->_range_atk_dmg = 15 ;
        this->_armor_atk_rdc = 3  ;
}

ScavTrap::ScavTrap(const ScavTrap& _ScavTrap)
{
        std::cout << "ScavTrap copy cnstructor called" << '\n';

        this->_energy_pnts   =  _ScavTrap._energy_pnts;
        this->_melee_atk_dmg =  _ScavTrap._melee_atk_dmg;
        this->_range_atk_dmg =  _ScavTrap._range_atk_dmg;
        this->_armor_atk_rdc =  _ScavTrap._armor_atk_rdc; 

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

    std::cout << "SC4V-TP " << this->_name << " challenges you: "
              << challenges[rand() % 5] << std::endl;
    
}
