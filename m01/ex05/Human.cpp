#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Human.hpp"



Human::Human(): brain(){

}
 
const Brain&   Human::getBrain() const{
    return brain;
}

std::string Human::identify() const {
    return brain.identify(); 
}


Human::~Human(){

}
