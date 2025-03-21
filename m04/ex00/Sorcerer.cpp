#include <iostream>
#include "Sorcerer.hpp"



Sorcerer::Sorcerer(std::string _name , 
                   std::string _title)
{
        std::cout << _name << " ," << _title << "is born !\n";
        this->_name  = _name;
        this->_title =_title;
}




Sorcerer::Sorcerer(const Sorcerer& _s)
{       
        std::cout << "Copy constructor Called! \n<"; 
        this->_name  = _s._name;
        this->_title = _s._title;
}



Sorcerer& Sorcerer::operator=(const Sorcerer& _s)
{
        std::cout << "Assign constructor Called!\n"; 
        if(this != &_s)
        {
            this->_name  = _s._name;
            this->_title = _s._title;
        }
        
        return *this;
}

std::string Sorcerer::_getName() const
{
        return _name;
}


std::string Sorcerer::_getTitle() const
{
        return _title;
}
    


Sorcerer::~Sorcerer()
{

       std::cout << _name <<","<< _title << "," 
       << "is dead. Consequences will never be the same !" << '\n';
}


void     Sorcerer::polymorph(const Victim& victim) const
{
        victim.getPolymorphed();
}


std::ostream& operator<<(std::ostream &o ,const Sorcerer& _s)
{
       o << "I am" <<  _s._getName()       ;
       o << " ," << _s._getTitle()         ;
       o <<" , and I like ponies !" << '\n';
       return o;
}