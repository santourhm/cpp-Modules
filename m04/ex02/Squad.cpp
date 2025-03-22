#include "Squad.hpp"

void    Squad::_cp(const Squad& _s )
{
    _count=_s._count;
    _ispace_marine = new ISpaceMarine*[_count];
    for (int i = 0; i < _count; i++) {
        _ispace_marine[i] = _s._ispace_marine[i]->clone();
    }
}

void   Squad::_rm()
{
    if(_count > 0)
    {
       for (int _i = 0 ;  _i < _count; _i++)
       {
            delete _ispace_marine[_i];
       }
       delete [] _ispace_marine;
    }
    _count = 0              ;
    _ispace_marine = nullptr;
}

Squad::Squad() : _ispace_marine(nullptr) , _count(0) {};


Squad::Squad(const Squad& _s ) :_ispace_marine(nullptr) , _count(0) 
{
       _cp(_s);
}

Squad::~Squad() 
{
    for (int i = 0; i < _count; ++i) 
    {
        delete _ispace_marine[i];
    }
    delete[] _ispace_marine;
}

Squad&  Squad::operator=(const Squad& _s)
{
        if(this!=&_s)
        {
            _rm()  ;
            _cp(_s);
        }
        return *this;
}



ISpaceMarine*  Squad::getUnit(int _id) const
{       
        if(_id < 0 || _id >= _count)
        {
            return nullptr;
        }
        return _ispace_marine[_id];
}


int     Squad::getCount() const 
{
        return _count;
}


int     Squad::push(ISpaceMarine* _m)
{
        if (!_m) return _count;  

        for (int i = 0; i < _count; i++) 
        {
            if (_ispace_marine[i] == _m) return _count;
        }
        ISpaceMarine** _cloned = new ISpaceMarine*[_count + 1];

        for (int i = 0; i < _count; i++) 
        {
            _cloned[i] = _ispace_marine[i];
        }

        _cloned[_count] = _m;  
        delete[] _ispace_marine;
        _ispace_marine = _cloned;
        _count++;

        return _count;
}



