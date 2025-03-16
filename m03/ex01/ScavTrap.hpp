#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP
#include <string>


class ScavTrap
{
    private:
            std::string _name;
        
            int _hit_pnts;
            int _max_hpnts;
            int _energy_pnts;
            int _level_nmbr;

            int _melee_atk_dmg;
            int _range_atk_dmg;
            int _armor_atk_rdc;

    public:
        

            void rangedAttack(std::string const & target) const ;
            void meleeAttack(std::string const & target)  const; 
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            
            void challengeNewcomer() const;

            ScavTrap() = default;
            ScavTrap(std::string _name);
            ScavTrap(const ScavTrap& _ScavTrap);
            ~ScavTrap() = default;

    };



#endif