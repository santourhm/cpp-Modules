#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

#include <string>

class Character
{
    private:
       
        std::string _name ;
        int         _ap   ;
        AWeapon *  _weapon;

    public:
        
        Character() = default;
        Character(std::string const & _name);
        Character(const Character& _c);
        Character& operator=(const Character& _c);
        ~Character();

        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);

        std::string getName() const;
        int getAP() const;
        AWeapon* getWeapon() const;

};

std::ostream& operator<<(std::ostream &o ,const Character& c);

#endif