#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP
#include <string>

class Zombie

{
    private:
        
        std::string _type ;
        std::string _name ;
        
    public:
        
        void                 annouce()   const           ;
        const std::string    _getType()  const           ;
        const std::string    _getName()  const           ;
        void                 _setType(std::string _type) ;
        void                 _setName(std::string _type) ;
        
        Zombie() = default;
        Zombie( 
            
                std::string _name, 
                std::string _type 
            
            )  : _type(_type), _name(_name) {} 
        ~Zombie()                                        ;

};






#endif