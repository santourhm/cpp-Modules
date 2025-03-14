#ifndef _HUMANB_HPP
#define _HUMANB_HPP
#include <string>
#include "Weapon.hpp"


class HumanB
{
    private:
       
       Weapon  *    _wB    ;
       std::string _nameB ;
     
    public:
        
        HumanB(Weapon& _wB, std::string _name);
        HumanB(std::string _name)             ;
        void           setWeapon(Weapon& weapon)    ;
        void           attack()        const  ;

};






#endif