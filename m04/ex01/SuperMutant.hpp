#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {

        public:

            SuperMutant();
            ~SuperMutant();

            SuperMutant(const SuperMutant& other);
            SuperMutant& operator=(const SuperMutant& other);

            void takeDamage(int damage) override;
            
};

#endif