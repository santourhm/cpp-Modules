#ifndef _FIXED_HPP
#define _FIXED_HPP
#include <cstdint>


class Fixed
{

    private:

        int                 value              ;
        static const int    FRACTIONAL_BITS = 8;
       
    public:
        
        Fixed() : value(0) {}                        ;
        Fixed(float value)                           ;
        Fixed(int   value)                           ;
        Fixed(const Fixed& fixed)                    ;
        ~Fixed()                                     ;
 
        int     getRawBits( void )             const ;
        void    setRawBits(int     const raw )       ;

        float   toFloat( void )        const         ;
        int     toInt( void )          const         ;

        // operators
        Fixed& operator=(const Fixed& other)         ;
        Fixed operator+(const Fixed& fixed) const    ;
        Fixed operator-(const Fixed& fixed) const    ;
        Fixed operator*(const Fixed& fixed) const    ;
        Fixed operator/(const Fixed& fixed) const    ;

        // cond

        bool operator<=(const Fixed& fixed) const    ;
        bool operator>=(const Fixed& fixed) const    ;
        bool operator>(const Fixed& fixed)  const    ;
        bool operator<(const Fixed& fixed)  const    ;
        bool operator==(const Fixed& fixed) const    ;
        bool operator!=(const Fixed& fixed) const    ;
    

        // inc dec

        Fixed& operator++()                          ;
        Fixed  operator++(int)                       ;
        Fixed& operator--()                          ;
        Fixed  operator--(int)                       ;


        static Fixed max(const Fixed& lfixed, const Fixed& rfixed) 
        {return (lfixed.value > rfixed.value) ? lfixed : rfixed;}
        static Fixed min(const Fixed& lfixed, const Fixed& rfixed) 
        {return (lfixed.value < rfixed.value) ? lfixed : rfixed;}

};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);


#endif 