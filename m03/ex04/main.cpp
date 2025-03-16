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


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <ctime>
#include <iostream>

int main() {
    srand(time(NULL));
    std::cout << "\n--- Creating SuperTrap ---\n";
    SuperTrap super("SuperClap");

    std::cout << "\n--- Testing Attacks ---\n";
    super.rangedAttack("Target1");  
    super.meleeAttack("Target2");   

    std::cout << "\n--- Testing Special Attacks ---\n";
    super.vaulthunter_dot_exe("RandomEnemy");  // From FragTrap

    std::cout << "\n--- Taking Damage and Repairing ---\n";
    super.takeDamage(50);
    super.beRepaired(30);

    super.rangedAttack("Target1");  
    super.meleeAttack("Target2");   

    std::cout << "\n--- Destroying SuperTrap ---\n";

    return 0;
}
