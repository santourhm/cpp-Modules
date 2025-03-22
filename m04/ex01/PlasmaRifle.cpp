#include "PlasmaRifle.hpp"
#include <iostream>



void    PlasmaRifle::attack()    const
{
        std::cout <<"* piouuu piouuu piouuu *\n";
}




PlasmaRifle&   PlasmaRifle::operator=(const PlasmaRifle& _other)
{
        if(this!=&_other)
        {
            AWeapon::operator=(_other);
        }
        return *this;
}