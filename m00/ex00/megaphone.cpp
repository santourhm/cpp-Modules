#include <iostream>
#include <string>
#define OFFSET 32
#define a_ASCII 97 
#define z_ASCII 122 

int main(int argc, char * argv[]){
    if(argc == 1 ){
       std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    }
    else{

        int i = 1;    
        while (argv[i]!=NULL)
        {  
            // const to not change argv[i]
            const char * s = argv[i];
            while(*s!='\0'){

                char c = *s; // do a copy of *s
                if(*s>=a_ASCII && *s<=z_ASCII){
                    c = c - OFFSET;             
                }
                std::cout<< c;
                s++;
            }
            i++;
        }

    }
    std::cout<<std::endl;
    return 0;
}