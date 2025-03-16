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

#ifndef _NINJATRAP_HPP
#define _NINJATRAP_HPP
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
    
            
    public:
            using   ClapTrap::operator=;

            void ninjaShoebox(ClapTrap& target);
            void ninjaShoebox(FragTrap& target);
            void ninjaShoebox(ScavTrap& target);
            void ninjaShoebox(NinjaTrap& target);

            void rangedAttack(std::string const & target) const override;
            void meleeAttack(std::string const & target)  const override;

            NinjaTrap() ;
            NinjaTrap(std::string _name);
            NinjaTrap(const NinjaTrap& _NinjaTrap);
            ~NinjaTrap() = default;

    };



#endif