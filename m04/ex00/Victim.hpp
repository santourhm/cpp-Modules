#ifndef _VICTIM_HPP
#define _VICTIM_HPP
#include <string>
class Victim
{
    private:
     
        std::string _name;

    public:
        
        Victim()    = default     ;
        Victim(std::string _name );
        Victim(const Victim& _s);
        Victim& operator=(const Victim& _s);
        ~Victim();

        std::string   _getName()  const;
        virtual void     getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &o,const Victim& _s);


#endif