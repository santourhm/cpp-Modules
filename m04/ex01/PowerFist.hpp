#ifndef _POWERFIST_HPP
#define _POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist :  public AWeapon
{
    
    public:

        PowerFist() : AWeapon("Power Fist",8,50)     {};
        PowerFist(const PowerFist& _p) : AWeapon(_p) {};
        PowerFist& operator=(const PowerFist& other)   ;
        ~PowerFist() = default                         ;

        void attack() const override;

};



#endif