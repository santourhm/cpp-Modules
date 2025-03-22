#include "Enemy.hpp"






Enemy::Enemy(const Enemy& weapon)
{
        this->_hp = weapon._hp;
        this->_type = weapon._type;
}

Enemy& Enemy::operator=(const Enemy& weapon)
{
        if(this!=&weapon)
        {

            this->_hp = weapon._hp;
            this->_type = weapon._type;

        }

        return *this;
}

Enemy::Enemy(int hp ,std::string const & _type)
{
        this->_hp = hp;
        this->_type = _type;
}


int           Enemy::getHP() const
{
        return _hp;
}


std::string   Enemy::getType() const
{
        return _type;
}

void          Enemy::takeDamage(int damage) 
{
        if (damage > 0) {
            _hp -= damage;
            if (_hp < 0) {
                _hp = 0;
            }
        }
}