#include <iostream>
#include <ctime> 
#include "FragTrap.hpp"

int main() {
    srand(time(NULL)); 

    FragTrap robot("Clappy");

    std::cout << "\n--- Testing Attacks ---\n";
    robot.rangedAttack("Enemy1");
    robot.meleeAttack("Enemy2");

    std::cout << "\n--- Testing Damage & Repair ---\n";
    robot.takeDamage(20);
    robot.beRepaired(15);
    robot.takeDamage(200);
    robot.beRepaired(200);

    std::cout << "\n--- Testing VaultHunter.EXE ---\n";
    for (int i = 0; i < 5; ++i) {
        robot.vaulthunter_dot_exe("RandomTarget");
    }

    std::cout << "\n--- Testing Out-of-Energy Case ---\n";
    robot.vaulthunter_dot_exe("OutOfEnergyTarget");

    return 0;
}
