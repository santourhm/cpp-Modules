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

#ifndef _SUPERTRAP_HPP
#define _SUPERTRAP_HPP
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:

            
            SuperTrap() ;
            SuperTrap(std::string _name);
            ~SuperTrap() = default;

            void rangedAttack(std::string const & target) const override;
            void meleeAttack(std::string const & target)  const override;

            using NinjaTrap::ninjaShoebox;

};



#endif