#ifndef _WEAPON_HPP
#define _WEAPON_HPP
#include <string>

class Weapon
{

    private:

        std::string   _type                 ;

    public:
        
        Weapon() = default                       ;
        Weapon(std::string  _type)               ;
        const std::string&  _getType()  const    ;
        void         _setType(std::string _type) ;  


};



#endif