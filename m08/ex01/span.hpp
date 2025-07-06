#ifndef   SPAN_HPP
#define   SPAN_HPP
#include  <iostream>
#include <vector>

class span
{
    private:
       
        size_t             N;
        std::vector<int>   v;
        int   index         ;

    public:

        span() {}          ;
        span(size_t N)     ;
        span(const span& s);
        void  addNumber(int value);
        int   shortestSpan() const ;
        int   longestSpan()  const ;

};



#endif