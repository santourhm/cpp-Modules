#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"





Zombie  *    ZombieEvent::newZombie(std::string _name)
{
            return new Zombie(_name , ""); 
}



void        ZombieEvent::setZombieType(Zombie &z , std::string _type)    
{
            z._setType(_type);
}


void       ZombieEvent::randomChuimp()
{

            const std::string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                        "abcdefghijklmnopqrstuvwxyz";
            
            std::random_device     rd ;
            std::mt19937     gen(rd());
            std::uniform_int_distribution<int> dist(0,charset.size()-1);
 
            std::string randomName;
            std::string randomType;
            for (int i =0; i < 5 ; ++i )
            {
                randomName += charset[dist(gen)];
                randomType += charset[dist(gen)];
            }

            Zombie  z = Zombie(randomName, randomType);
            z.annouce();

}