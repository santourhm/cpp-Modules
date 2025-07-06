#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>




template<typename T> class Array
{
        private:
            
            size_t   _size  ;
            T      * _array ;

        public:
            
            Array();
            Array(size_t _size);
            Array(const Array& arr);
            Array& operator=(const Array& arr);
            T&     operator[](size_t i) const;
            size_t size() const; 
            ~Array();
};


template<typename T> Array<T>::Array() : _size(0),_array(nullptr) {}


template<typename T> Array<T>::Array(size_t _size)  :  _size(_size)
{
            this->_array = new T[_size]();
}


template<typename T>  Array<T>::Array(const Array& other) : _size(other._size) 
{
            this->_array  = new T[_size]();
            for(size_t  s = 0 ; s < other._size; s++)
            {
                this->_array[s] = other._array[s]; 
            }
}
            
template<typename T> Array<T>&   Array<T>::operator=(const Array& other) 
{
            if (this == &other) 
            {
                return *this;
            }

            delete[] this->_array;
            
            this->_size  = other._size;
            this->_array = new T[this->_size]();
            
            for(size_t  s = 0 ; s < other._size; s++)
            {
                this->_array[s] = other._array[s]; 
            }

            return *this;
}

template<typename T> T&         Array<T>::operator[](size_t i) const {
    
            if (i >= this->_size) 
            {
                throw std::out_of_range("Index is out of bounds");
            }
            return this->_array[i];
}


template<typename T> size_t      Array<T>::size() const
{
            return this->_size;
}



template<typename T>  Array<T>::~Array()
{
            delete [] this->_array;
}

#endif