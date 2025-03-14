#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"
#include "ZombieHore.hpp"
#include <cstdlib>  
#include <ctime>




ZombieHore::ZombieHore(int N)
{   
    this->N  = N;
    std::srand(std::time(nullptr));
    const std::string   s[] = {"BOB","NOB","ZOB","HOB","LOB"};
    const std::string   c[] = {"HABO","NABO","SABO","KHABO","CHDO"};
    _Zombies    = new Zombie[N];
     
    for(int i = 0; i < N ; ++i){
        _Zombies[i]._setName(s[std::rand()%5]);
        _Zombies[i]._setType(c[std::rand()%5]);
    } 

}



void  ZombieHore::_annouce() const{

     for(int i = 0; i < this->N ; ++i){
        _Zombies[i].annouce();
    } 

}



ZombieHore::~ZombieHore() {
    delete[] _Zombies;
}