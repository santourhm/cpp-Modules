#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Sheep.hpp"
#include "Otter.hpp"
#include <iostream>

int main() {
  
    Sorcerer robert("Robert", "the Magnificent");

  
    Victim jim("Jim");
    Peon joe("Joe");
    Sheep fluffy("Fluffy");
    Otter otto("Otto");

  
    std::cout << robert << jim << joe << fluffy << otto;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(fluffy);
    robert.polymorph(otto);

    return 0;
}