#include <iostream>
#include <string>
#include "Pony.hpp"
#include <malloc.h>

void    ponyOnTheHeap( 
            
            std::string _subName,
            std::string _color  ,
            int         _weigth ,
            int         _heigth  
            
            )

{
        size_t _size  =          0  ;         
        Pony *_p = new Pony(
                _subName            ,
                _color              ,
                _weigth             ,
                _heigth  
                )                   ;
        
        _p->_RunYouPony()           ;
        _p->_PonyAndHeigth()        ;
        _p->_PonyAndWeigth()        ;

        if(malloc_usable_size(_p) > 0)
        
        {   
           
            _size += sizeof(*_p)                                                                                   ; 
            
            std::cout << "______ pony on the heap"                                                    << std::endl ; 
            std::cout << "i'm intilized on the heap"                                                  << std::endl ;
            std::cout << "my adress is =  " << _p                                                     << std::endl ; 
            std::cout << "the allocated size in the heap is =  " << malloc_usable_size(_p) << "bytes" << std::endl ; 
            std::cout << "the calculated siz of the object  =  " << _size                  << "bytes" << std::endl ; 
        
        }

        delete _p                                                                                                    ;
        _p = nullptr                                                                                                 ;
        std::cout << "Pony is dead , Allocates size must be 0 =  " << malloc_usable_size(_p) << "bytes" << std::endl ; 

    
}


void    ponyOnTheStack( 
            
            std::string _subName,
            std::string _color  ,
            int         _weigth ,
            int         _heigth  
            
            )

{

    void* stackPointer_before_init;
    void* stackPointer_after_init;

    asm("mov %%rsp, %0" : "=r"(stackPointer_before_init)); 

    std::cout << "----- stack poni ------" << std::endl;

    Pony _p(
        _subName,
        _color,
        _weigth,
        _heigth
    );

    _p._RunYouPony();
    _p._PonyAndHeigth();
    _p._PonyAndWeigth();

    stackPointer_after_init = &_p;

    std::cout << "Stack pointer address before initialization: " << stackPointer_before_init << std::endl;
    std::cout << "Stack pointer address after initialization: " << stackPointer_after_init << std::endl;
    std::cout << "I'm initialized on the stack" << std::endl;
    std::cout << "My address is = " << &_p << std::endl;

    std::ptrdiff_t size_of_p = static_cast<char*>(stackPointer_after_init) - static_cast<char*>(stackPointer_before_init);
    std::cout << "Size of the allocated value + padding = " << size_of_p << " bytes" << std::endl;

    
}




int main()

{ 
   
    std::string _subName ;
    std::string _color   ;
    int         _weigth  ;
    int         _heigth  ;

    std::cin  >> _subName ;
    std::cin  >> _color   ;
    std::cin  >> _weigth  ;
    std::cin  >> _heigth  ;

    ponyOnTheHeap( 
            
            _subName,
            _color  ,
            _weigth ,
            _heigth  
            
            );

    
    ponyOnTheStack(

            _subName,
            _color  ,
            _weigth ,
            _heigth  
            
            );
}