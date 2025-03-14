#include <iostream>
#include <string>
#include "Pony.hpp"


Pony::Pony( 
            
            std::string _subName,
            std::string _color  ,
            int         _weigth ,
            int         _heigth  
            
            )
{
    this->_subName = _subName ;
    this->_color   = _color   ;
    this->_weigth  = _weigth  ;
    this->_heigth  = _heigth  ;

}


Pony::~Pony()
{
    
}




void Pony::_TalkYouPony()   const {

    std::cout << "Bonjour je suis  " << this->_subName << "et je suis "  << this->_color << std::endl;
    
}

void Pony::_RunYouPony()    const {

    std::cout << "DOK DADAK DOk DADAK .... Running!"                                    << std::endl;

}

void Pony::_PonyAndHeigth()  const {

    std::cout<< "i'm " << this->_heigth << " cm tall not that much :("                   <<std::endl;

}


void Pony::_PonyAndWeigth()  const {

    std::cout<< "i have " << this->_weigth << " kg quite fath off :("                   <<std::endl;

}


