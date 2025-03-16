#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    
            
    public:

           /*  void rangedAttack(std::string const & target) const ;
            void meleeAttack(std::string const & target)  const; 
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
             */
            void vaulthunter_dot_exe(std::string const & target);

            FragTrap() ;
            FragTrap(std::string _name);
            FragTrap(const FragTrap& _fragTrap);
            ~FragTrap() = default;

    };



#endif