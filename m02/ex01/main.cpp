#include <iostream>
#include "Fixed.hpp"



int main( void ) {
    /*   Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);



    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl; */

    Fixed a(210.1f);
    Fixed b(210.0f);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << b++ << std::endl;

    if(a!=b){
      std::cout<<"Work ?\n"; 
    }

    std::cout << Fixed::min(a,b) << std::endl;
    
    return 0;
}