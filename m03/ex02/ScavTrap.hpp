#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

/* 
            void rangedAttack(std::string const & target) const ;
            void meleeAttack(std::string const & target)  const; 
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount); */
            
            void challengeNewcomer() const;

            ScavTrap() ;
            ScavTrap(std::string _name);
            ScavTrap(const ScavTrap& _ScavTrap);
            ~ScavTrap() = default;

    };



#endif