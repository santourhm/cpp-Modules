#include <iostream>
#include "Victim.hpp"




Victim::Victim(std::string _name)
{
        std::cout <<"Some random victim called "<<_name << "just popped !\n";
        this->_name  = _name;
}




Victim::Victim(const Victim& _s)
{       
        std::cout << "Copy constructor Called! \n<"; 
        this->_name  = _s._name;
}



Victim& Victim::operator=(const Victim& _s)
{
        std::cout << "Assign constructor Called!\n"; 
        if(this != &_s)
        {
            this->_name  = _s._name;
        }
        
        return *this;
}

std::string Victim::_getName() const
{
        return _name;
}



Victim::~Victim()
{

       std::cout << "Victim "<< _name << "," 
       << "just died for no apparent reason !" << '\n';
}


void    Victim::getPolymorphed()   const 
{
        std::cout<<_name <<" has been "
        << "turned into a cute little sheep !\n";
}



std::ostream& operator<<(std::ostream &o ,const Victim& _s)
{
       o << "I am" <<  _s._getName()       ;
       o <<" and I like otters !  '\n'";
       return o;
}
