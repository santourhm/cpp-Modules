

/* ************************************************************************** */
/*                                                                            */
/* *#*#*  #   #  *#*#*  #      #     #    *#*                                 */
/* #   #  #   #  #      #      #     #   #   #                                */
/* *#*#*  *#*#*  *#*#*  #      # * * #   *#*#*                                */
/* #      #   #  #      #      #     #   #   #                                */
/* #      #   #  *#*#*  *#*#*  #     #   #   #          By : SANTOURA Hamza   */
/*                                                                            */
/* ************************************************************************** */
/* Tel : +33758985508   | E-mail :     hamza.santoura@phelma.grenoble-inp.fr  */
/* ************************************************************************** */


#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"




HumanA::HumanA(Weapon& _wA,    std::string _name) : _wA(_wA), _nameA(_name) {};

void   HumanA::attack()                    const

{
    
    std::cout << _nameA << " attacks with this " << _wA._getType() << std::endl;

}
