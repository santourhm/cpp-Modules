#ifndef _HUMAN_HPP
#define _HUMAN_HPP
#include <string>
#include "Brain.hpp"


class Human
{
    private:

        const Brain   brain ;
    
    public:
        
        Human();
        std::string identify()        const         ;
        const Brain&       getBrain() const         ;
        ~Human();

};







#endif