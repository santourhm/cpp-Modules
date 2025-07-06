#ifndef EASYFRIND_HPP
#define EASYFRIND_HPP
#include <iostream>
#include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(const T& t, int v)
{
    for (auto it = t.begin(); it != t.end(); ++it)
    {
        if (*it == v)
            return it;
    }

    throw std::runtime_error("Value not found");
    
    return t.end();
}

#endif