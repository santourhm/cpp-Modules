#include <iostream>
#include "Peon.hpp"




Peon::Peon(std::string _name) : Victim(_name) 
{
        std::cout <<"Zog zog\n";
}


Peon::~Peon()
{

       std::cout << "Bleuark... \n";
      
}


void    Peon::getPolymorphed()   const 
{
        std::cout<<Victim::_getName()<<" has been "
        << "turned into a pink pony !\n";
}



