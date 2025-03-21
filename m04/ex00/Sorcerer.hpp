#ifndef _SORCECER_HPP
#define _SORCECER_HPP
#include <string>
#include "Victim.hpp"
class Sorcerer
{
    private:
     
        std::string _name;
        std::string _title;

    public:
        
        Sorcerer()    = default     ;
        Sorcerer(std::string _name , 
                 std::string _title);
        Sorcerer(const Sorcerer& _s);
        Sorcerer& operator=(const Sorcerer& _s);
        ~Sorcerer();

        std::string   _getName()  const;
        std::string   _getTitle() const;

        void     polymorph(Victim const &) const;

 
};

std::ostream &operator<<(std::ostream &o,const Sorcerer& _s);







#endif