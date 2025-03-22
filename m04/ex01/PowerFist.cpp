#include "PowerFist.hpp"
#include <iostream>



void    PowerFist::attack()    const
{
        std::cout <<"* pschhh... SBAM! *\n";
}



PowerFist&   PowerFist::operator=(const PowerFist& _other)
{
        if(this!=&_other)
        {
            AWeapon::operator=(_other);
        }
        return *this;
}