/* ************************************************************************** */
/*                                                                            */
/* *#*#*  #   #  *#*#*  #      #     #    *#*                                 */
/* #   #  #   #  #      #      #     #   #   #                                */
/* *#*#*  *#*#*  *#*#*  #      # * * #   *#*#*                                */
/* #      #   #  #      #      #     #   #   #                                */
/* #      #   #  *#*#*  *#*#*  #     #   #   #          By : SANTOURA Hamza   */
/*                                                                            */
/* ************************************************************************** */
/* Tel : +33758985508   | E-mail :     hamza.santoura@phelma.grenoble-inp.fr  */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>



int main(int argc, char * argv[])
{
    
    if(argc != 4){
        std::cerr << "Error : Invalid number of arguments" << std::endl     ;
        std::cout << "Usage :./exc_file <file_path> <s1> <s2> " << std::endl;
        return 1                                                            ;            
    }

    std::fstream file                                                                      ;   
    std::fstream replaced_file                                                             ;
    const std::string file_path = argv[1]                                                  ;                
    const std::string   s1          =       argv[2]                                        ;
    const std::string   s2          =       argv[3]                                        ;
    size_t dot_pos = file_path.rfind('.');
    std::string file_replace_name = (dot_pos != std::string::npos) 
                                    ? file_path.substr(0, dot_pos) + ".replace" 
                                    : file_path + ".replace"                               ;

    file.open(argv[1], std::ios::in)                      ;
    replaced_file.open(file_replace_name, std::ios::out)  ;
    
    if(!file.is_open())
    {
        std::cerr << "Error : File not found" << std::endl;
        return 1                                          ;
    }

    std::string line;
    
    while (std::getline(file,line))
    
    {
        
        size_t pos = 0                                       ;
        while((pos= line.find(s1,pos))  != std::string::npos)
        {
            line.replace(pos, s1.length(), s2)               ;
            pos += s2.length()                               ;
        }
        replaced_file << line << std::endl                   ;

    }

    file.close()                                             ;
    replaced_file.close()                                    ;
    return 0;
}




