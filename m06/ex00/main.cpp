#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <limits>


static void print_usage()
{
        std::cout << "Usage : ./conversion str_expression " << '\n';
}


static bool isFloat(std::string str)
{
    bool    is_float     =  str.find(".") != std::string::npos && str.find("f") != std::string::npos &&
                            (str.find_first_of("f") - str.find_last_of("f")) == 0 &&
                            (str.find_first_of(".") - str.find_last_of(".")) == 0 &&
                            str.find(".") + 1 <  str.find("f")  && str.find(".") >= 1  ;
    if(!is_float)
        return is_float ;
    
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        if(*it != 'f' && std::isalpha(*it)&&*it!='+' && *it!='-')
           return !is_float; 

    }

    return is_float;
}


static bool isDouble(std::string str)
{
    bool    is_double     =  str.find(".") != std::string::npos && str.find(".") >= 1 &&
                             (str.find_first_of(".") - str.find_last_of(".")) == 0 ;

    if(!is_double)
        return is_double ;
    
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        if( *it !='.' && !std::isdigit(*it)&& *it!='+' && *it!='-')
           return !is_double; 

    }

    return is_double;
}


static bool isInt(std::string str)
{
    bool    is_int     = true;

    
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        if(!std::isdigit(*it)&& *it!='+' && *it!='-')
           return !is_int; 

    }

    return is_int;
}

static bool isChar(std::string str)
{
    return (str.length() == 1) && (!(std::isdigit(str[0])));
}

 static void print(char c, int i, float f, double d)
{
       
        std::cout << "char: "   << c << std::endl            ;   
        std::cout << "int: "    << i << std::endl            ;   
        std::cout << "float: "  << f << "f" << std::endl   ;
        std::cout << "double: " << d << std::endl    ;
}

int main(int argc , char * argv[])
{

    if(argc != 2)
    {   
        print_usage();
        return EXIT_FAILURE;
    }

    std::string  str  = argv[1];
    char   c;
    int    i;
    float  f;
    double d; 

    if(isChar(str))
    {
           
            i = static_cast<int>(str[0]);
            d = static_cast<double>(str[0]);
            c = static_cast<char>(str[0]);
            f = static_cast<int>(str    [0]);

            print(c,i,f,d);
            
    }
    else if(isFloat(str))
    {
           float val = std::atof(str.c_str());
           
                    
            i = static_cast<int>(val);
            d = static_cast<double>(val);
            c = static_cast<char>(val);
            f = val;
    print(c,i,f,d);

    }
    else if(isDouble(str))
    {
            double val = strtod(str.c_str(), NULL);
           
            i = static_cast<int>(val);
            //  d = static_cast<double>(val);
            c = static_cast<char>(val);
            f = static_cast<float>(val);
    print(c,i,f,val);

           
    }
    else if(isInt(str))
    {
            
            long long check_val = std::atoll(str.c_str());
            if (check_val > std::numeric_limits<int>::max() || check_val < std::numeric_limits<int>::min()) {
                
            } 
            
            int val = static_cast<int>(check_val);
        
            i = static_cast<int>(val);
            d = static_cast<double>(val);
            c = static_cast<char>(i);
            f = static_cast<float>(val);
            print(c,i,f,d);
   
        }
    else{
        std::cout << "Invalid Input\n";
    }
   
    
    return EXIT_SUCCESS; 
}