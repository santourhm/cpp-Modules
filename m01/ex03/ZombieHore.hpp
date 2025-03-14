#ifndef _ZOMBIEHORE_HPP
#define _ZOMBIEHORE_HPP
#include <string>
#include "Zombie.hpp"

class ZombieHore
{
    private:
        Zombie * _Zombies           ;
        int      N                  ;

    public:
        ZombieHore(int N)     ;
        void _annouce() const ;
        ~ZombieHore();
};


#endif