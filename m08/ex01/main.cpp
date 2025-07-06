#include "span.hpp"
#include <iostream>







int main()
{
    span sp = span(100000);
    for(unsigned int i = 100000; i > 0; i--)
        sp.addNumber(i);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
   return 0;
}