#include <iostream>
#include "span.hpp"
#include <limits>
#include <stdexcept>
#include <algorithm>

span::span(size_t N) : N(N) , index(0)
{
      if (N > static_cast<size_t>(std::numeric_limits<int>::max()))
        throw std::invalid_argument("Illegal argument: N is too large");
      
      this->v = std::vector<int>(N);
}



span::span(const span& other) 
    : N(other.N), index(other.index), v(other.v)
{}



void span::addNumber(int value)
{
    if (this->index >= N)
        throw std::out_of_range("no more place");

    this->v[this->index] = value;
    this->index++;
}




int     span::shortestSpan()  const 
{
        if (index < 2)
            throw std::logic_error("Not enough elements to compute span");
        std::vector<int> tmp(v.begin(), v.begin() + index);
        std::sort(tmp.begin(), tmp.end());
        
        int diff     = 0;
        int minspan  = std::numeric_limits<int>::max();
        for(size_t s = 1 ; s < index ; s++)
        {
            int diff = tmp[s] - tmp[s - 1];
            if(diff < minspan)
                minspan = diff;
        }

        return minspan;
}

int     span::longestSpan() const
{
        if (index < 2)
            throw std::logic_error("Not enough elements to compute span");

        auto [minIt, maxIt] = std::minmax_element(v.begin(), v.begin() + index);
        return *maxIt - *minIt;
}


