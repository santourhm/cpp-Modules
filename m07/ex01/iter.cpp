#include <iostream>





template <typename T>   void iter(T * ptr, size_t len, void (*f)(T&))
{
                        for(size_t  i = 0 ; i < len ; ++i)
                        {
                            f(*(ptr + i));
                        }
}


template <typename T>   void  increment(T & i)
{
                        i = (i + 1);
}

template <typename T>   void  print(T & i)
{
                        std::cout <<"array[" << 
                        i<< "] : " << i << std::endl;
}


int main()
{
                        int   array[4]            = {1,2,3,4};
                        std::string stringArray[] = {"one", "two", "three"};

                        iter<int>(array, 4, &increment<int>); 

                        for(size_t  i = 0 ; i < 4 ; ++i)
                        {
                            print(*(array + i));
                        }

                        iter<std::string>(stringArray, 3, &print<std::string>); 

                        return 0;
}




