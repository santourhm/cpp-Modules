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

#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

            void challengeNewcomer() const;

            void rangedAttack(std::string const & target) const override;
            void meleeAttack(std::string const & target)  const override;
            
            using   ClapTrap::operator=;

            ScavTrap() ;
            ScavTrap(std::string _name);
            ScavTrap(const ScavTrap& _ScavTrap);
            ~ScavTrap() = default;

    };



#endif