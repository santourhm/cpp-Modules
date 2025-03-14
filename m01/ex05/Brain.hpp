#ifndef  _BRAIN_HPP
#define  _BRAIN_HPP
#include <string>


class Brain
{
    private:
        
        int              _IQ;
        std::string _NikName;
        std::string  _Weigth;

    public:

        std::string   identify() const;
        Brain() = default;
        Brain(    int              _IQ,
                  std::string _NikName,
                std::string  _Weigth
            );
        ~Brain();

};




#endif