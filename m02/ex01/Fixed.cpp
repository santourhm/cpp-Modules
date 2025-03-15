#include <iostream>
#include <cstdint>
#include "Fixed.hpp"
#include <cmath>
#define EPSILON 1.0f/(1 << 8)



Fixed::Fixed(int value)
{       
        this->value = (value << FRACTIONAL_BITS); // chift by 8 bits to the left 
}

Fixed::Fixed(float input)
{
        this->value = roundf(input * (1 << FRACTIONAL_BITS));
}

Fixed::Fixed( const  Fixed& fixed)
{

        //std::cout << "copy constructor called \n";
        this->value = fixed.value;

} 

// assigment op constructor
Fixed& Fixed::operator=(const Fixed&  other) 
{
        //std::cout << "assigment op constructor called \n";

        if(this!=&other)
        {
            value = other.value ;    
        }

        return *this            ;
}


int    Fixed::getRawBits( void )      const 
{
        //std::cout << "getRawBits called \n";
        return  this->value;
}


void   Fixed::setRawBits( int const raw )

{
        this->value = raw;
}

float  Fixed::toFloat( void ) const
{
        return (float) this->value / ( 1 << this->FRACTIONAL_BITS);
}

int  Fixed::toInt( void )     const
{
        return this->value >> this->FRACTIONAL_BITS;
}

Fixed::~Fixed()
{
        //std::cout << "Distructor CALLLED " << std::endl;

}

Fixed Fixed::operator+(const Fixed& fixed) const 
{
        Fixed result;
        result.value = this->value + fixed.value;
        return result;
}


Fixed Fixed::operator-(const Fixed& fixed) const 
{
        Fixed result;
        result.value = this->value - fixed.value;
        return result;
}



Fixed Fixed::operator*(const Fixed& fixed) const 
{
        Fixed result ;
        result.value = this->value*fixed.value >> this->FRACTIONAL_BITS;
        return result;
}


Fixed Fixed::operator/(const Fixed& fixed) const 
{
        if(!fixed.value){
                std::runtime_error("Dvision by Zero !");
        }
        Fixed result;
        result.value = (int) (this->value << this->FRACTIONAL_BITS ) / fixed.value  ;
        return result;
}

/* bool Fixed::operator==(const Fixed& l, const Fixed& r)   
{
        std::cout << "== called\n"; 
        bool result;
        return true;
}
 */
bool Fixed::operator==(const Fixed& other) const
 {
        //std::cout << "== called\n"; 
        float abs = this->toFloat() - other.toFloat() ;
        if(abs < 0) {abs=-abs;}
        return abs < EPSILON;
 }
 
bool Fixed::operator!=(const Fixed& other) const
{

       // std::cout << "!= called\n"; 
       
        return this->value!=other.value;

}

bool Fixed::operator>=(const Fixed& other) const
{

        //std::cout << ">= called\n"; 
        return this->value>=other.value;

}


bool Fixed::operator<=(const Fixed& other) const
{
        //std::cout << "<= called\n"; 
        return this->value <=other.value;
}

bool Fixed::operator>(const Fixed& other) const
{

        //std::cout << "> called\n"; 
        return this->value>other.value;

}


bool Fixed::operator<(const Fixed& other) const
{
        //std::cout << "< called\n"; 
        return this->value < other.value;
}


std::ostream  &operator<<(std::ostream &o, Fixed const &fixed)
{
        o << fixed.toFloat();
        return (o);
}


// prefix-inc
Fixed& Fixed::operator++()                      
{
       // std::cout << "++value \n";
        value++;
        return *this;          
}

// post-inc
Fixed Fixed::operator++(int)                      
{
        //std::cout << "value++\n";
        Fixed result = *this;
        value++;
        return result; 
}
// prefix-dec
Fixed& Fixed::operator--()                      
{
        //std::cout << "--value \n";
        value++;
        return *this;          
}


// post-dec
Fixed Fixed::operator--(int)                      
{
        //std::cout << "value--\n";
        Fixed result = *this;
        value--;
        return result; 
}

