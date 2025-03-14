#ifndef _HUMANA_HPP
#define _HUMANA_HPP
#include <string>
#include "Weapon.hpp"




class HumanA
{
    private:
       
       Weapon&    _wA    ;
       std::string _nameA ;
     
    public:
        HumanA(Weapon& _wA, std::string _name)   ;
        void           attack()        const     ;

};






#endif