#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy 
{
        public:
            
            RadScorpion();
            ~RadScorpion() override;

            RadScorpion(const RadScorpion& other);
            RadScorpion& operator=(const RadScorpion& other);

};

#endif