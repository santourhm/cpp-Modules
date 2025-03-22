#ifndef _PLASMARIFLE_HPP
#define _PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    
    public:

        PlasmaRifle() : AWeapon("Plasma Rifle",5,21)     {};
        PlasmaRifle(const PlasmaRifle& _p) : AWeapon(_p) {};
        PlasmaRifle&   operator=(const PlasmaRifle& _other);
        ~PlasmaRifle() = default                           ;

        void attack() const override;

};



#endif