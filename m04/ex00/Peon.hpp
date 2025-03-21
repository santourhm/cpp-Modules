#ifndef _PEON_HPP
#define _PEON_HPP
#include <string>
#include "Victim.hpp"


class Peon : public Victim
{
   
    public:
        
        Peon()    = default     ;
        Peon(std::string _name );
        Peon(const Peon& _s) : Victim(_s) {};
        ~Peon();

        void     getPolymorphed() const override;

};


#endif
