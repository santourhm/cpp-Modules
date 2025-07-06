#include <iostream>
#include <vector>
#include "easyfind.hpp"





int main()
{

    std::vector<int> v = {8, 4, 5, 9};

    try {
        
        auto it = easyfind(v, 5);
        std::cout << "Found: " << *(it) << std::endl;

        it = easyfind(v, 10);
        std::cout << "Found: " << *it << std::endl;

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }




    return 0;
}