#include <iostream>
#include <malloc.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main(){

    ZombieEvent event                            ;

    Zombie *        z1 = event.newZombie("Dahch");        // on the heap
    Zombie &z1Ref = *z1;
    event.setZombieType(z1Ref,"Bargi")           ;
    z1->annouce()                                ;
    
    if(malloc_usable_size(z1) > 0)
    {
        std::cout << "<"   << z1->_getName()      ;
        std::cout << "> (" << z1->_getType()      ;
        std::cout << ") >" << "i'm on the heap\n" ;
    }
    
    delete z1;

    event.randomChuimp()                         ;        // on the stack

    return 0;

}
