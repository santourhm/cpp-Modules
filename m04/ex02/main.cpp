#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
    ISpaceMarine* marine1 = new TacticalMarine;
    ISpaceMarine* marine2 = new AssaultTerminator;

    Squad squad;
    squad.push(marine1);
    squad.push(marine2);

    for (int i = 0; i < squad.getCount(); ++i) {
        ISpaceMarine* unit = squad.getUnit(i);
        unit->battleCry();
        unit->rangedAttack();
        unit->meleeAttack();
    }

    return 0;
}