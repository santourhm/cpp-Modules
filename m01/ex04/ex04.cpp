#include <iostream>
#include <string>




int main(){


    std::string HuMB = "HI THIS IS BRAIN";

    std::string * ptrStr = &HuMB; 

    std::string &refStr  = HuMB;
    
    std::cout << ptrStr << std::endl;
    std::cout << refStr << std::endl;
}

