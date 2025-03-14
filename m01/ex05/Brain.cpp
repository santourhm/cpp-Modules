#include <iostream>
#include <sstream>
#include "Brain.hpp"




std::string   Brain::identify() const{

    std::ostringstream adress ;
    adress << this ;
    return adress.str(); 

}


Brain::Brain(   
                int              _IQ,
                std::string _NikName,
                std::string  _Weigth
            )
{
                this->_IQ = _IQ;
                this->_NikName = _NikName;
                this->_Weigth  = _Weigth;
}


Brain::~Brain(){
    std:: cout <<"Brain destroying" << std::endl;
}

