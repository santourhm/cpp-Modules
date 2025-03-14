#ifndef _PONY_HPP
#define _PONY_HPP
#include <string>

class Pony
{
    private:
        
        std::string _subName ;
        std::string _color   ;
        int         _weigth  ;
        int         _heigth  ;

    
    public:
        
        Pony( 
              std::string _subName,
              std::string _color  ,
              int         _weigth ,
              int         _heigth  
            );
        
        void _TalkYouPony()    const ;
        void _RunYouPony()     const ;
        void _PonyAndWeigth()  const ;
        void _PonyAndHeigth()  const ;

        ~Pony()                            ;

};




#endif