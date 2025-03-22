#ifndef _AWEAPON_HPP
#define _AWEAPON_HPP

#include <string>

class AWeapon
{
    private:

        std::string _name  ;
        int         _apcost;
        int         _damage;
   
    public:
        
        AWeapon() = default ;
        AWeapon(const AWeapon& weapon);
        AWeapon& operator=(const AWeapon& weapon);
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon() = default;
        
        std::string  getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

};

#endif