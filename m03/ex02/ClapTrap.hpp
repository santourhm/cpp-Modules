#ifndef _ClapTrap_HPP
#define _ClapTrap_HPP
#include <string>


class ClapTrap
{
    protected:
            std::string _name;
        
            int _hit_pnts;
            int _max_hpnts;
            int _energy_pnts;
            int _max_energy_pnts;
            int _level_nmbr;

            int _melee_atk_dmg;
            int _range_atk_dmg;
            int _armor_atk_rdc;

    public:
        
            void rangedAttack(std::string const & target) const ;
            void meleeAttack(std::string const & target)  const; 
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            
            ClapTrap() ;
            ClapTrap(std::string _name);
            ClapTrap(const ClapTrap& _ClapTrap);
            ClapTrap&   operator=(const ClapTrap& other);
            ~ClapTrap() = default;

    };



#endif