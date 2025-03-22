#ifndef _ENEMY_HPP
#define _ENEMY_HPP

#include <string>


class Enemy
{
        private:
           
            int         _hp  ;
            std::string _type;

        public:
            
            Enemy() = default;
            Enemy(const Enemy&  _e);
            Enemy(int hp, std::string const & type);
            Enemy& operator=(const Enemy& _e);
            virtual ~Enemy() = default;

            std::string virtual getType() const;
            int getHP() const;
            virtual void takeDamage(int);


        };


#endif