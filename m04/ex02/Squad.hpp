#ifndef _SQUAD_HPP
#define _SQUAD_HPP
#include "ISquad.hpp"

class Squad : public ISquad
{
        private:
           
            ISpaceMarine ** _ispace_marine;
            int            _count         ;

            void     _cp(const Squad& _s );
            void     _rm()                ;
          
        public:
            
            Squad();
            Squad(const Squad& _s);
            Squad& operator=(const Squad& _s);
            ~Squad() ;

            int getCount()             const override;
            ISpaceMarine* getUnit(int) const override;
            int push(ISpaceMarine*)    override;


};

#endif