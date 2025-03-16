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

#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    
            
    public:

            void vaulthunter_dot_exe(std::string const & target);
            
            using   ClapTrap::operator=;
            
            FragTrap() ;
            FragTrap(std::string _name);
            FragTrap(const FragTrap& _fragTrap);
            ~FragTrap() = default;

    };



#endif