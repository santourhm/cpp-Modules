#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP
#include <string>


class FragTrap
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
            
            void vaulthunter_dot_exe(std::string const & target);

            FragTrap() = default;
            FragTrap(std::string _name);
            FragTrap(const FragTrap& _fragTrap);
            ~FragTrap() = default;

    };



#endif