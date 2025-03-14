#include <iostream>
#include <string>
#include "Zombie.hpp"






void     Zombie::annouce()   const
{

    std::cout << "<"   << _name      ;
    std::cout << "> (" << _type      ;
    std::cout << ") >" << "ZABIIIII\n" ;

}


const std::string   Zombie::_getName() const
{
      return this->_name             ;
}


const std::string   Zombie::_getType() const
{
      return this->_type             ;
}



void      Zombie::_setType(std::string _type)
{
    this->_type = _type;
}


void      Zombie::_setName(std::string _name)
{
    this->_name = _name;
}



Zombie::~Zombie(){
   std::cout << _name << " (" << _type << ") is destroyed." << std::endl;
}