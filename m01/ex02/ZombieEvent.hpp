#ifndef _ZOMBIEEVENT_HPP
#define _ZOMBIEEVENT_HPP
#include "Zombie.hpp"


class ZombieEvent
{
    private:

    public:

        Zombie  *    newZombie(std::string _name) ;
        void         setZombieType(Zombie &z      ,
                               std::string _type );
        void         randomChuimp()               ;
              

};


#endif