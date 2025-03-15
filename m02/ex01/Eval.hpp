#ifndef _EVAL_HPP
#define _EVAL_HPP
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include "Fixed.hpp"


class Eval
{
    
    private:

       std::istringstream expr;

       char peek()
       {
            while(std::isspace(expr.peek())){expr.get();}
            return expr.peek();
       }

       char get()
       { 
            while(std::isspace(expr.peek())){expr.get();}
            return expr.get();
       }

       Fixed parse_fctr()
       {

            char op = peek();            
            if(op == '-')
            {
                get();
                return Fixed(-1)*parse_fctr();
            }

            if(op == '(')
            {
                get();
                Fixed result = parse_expr();
                char subop = peek(); 
                if(subop==',')
                {
                    get();
                    return result;
                } 
                get();
                return result;
            }
            else if (isdigit(op))
            {
                return parse_num();
            }
            else if (isalpha(op))
            {
                return parse_fun();
            }
            return Fixed(0);
        }
        Fixed parse_fun()
        {
            std::string input;
            while (isalpha(peek()))
            {
                input += static_cast<char>(std::tolower(get()));  
            }
        
            Fixed lop = parse_expr();
            Fixed rop = parse_expr();
            get();
        
            if (input.compare("max") == 0)
            {
                return Fixed::max(lop, rop);
            }
            else if (input.compare("min") == 0) 
            {
                return Fixed::min(lop, rop);
            }
            return Fixed(0);
        }
        
        Fixed parse_num() {
            std::string input;
            while (isdigit(peek()) || peek() == '.') 
            {
                input += get();  
            }
           

            if (input.find('.') != std::string::npos) 
            {
                return Fixed(std::stof(input));  
            }
            return Fixed(std::stoi(input)); 
        }
        
       

        Fixed parse_term()
        {
            Fixed result = parse_fctr();

            while (true)
            {
                  
                char op = peek();
                if(op == '*' || op == '/')
                {
                    get();
                    Fixed lvalue = parse_fctr();
                    if(op == '*')
                    {
                        result = result*lvalue; 
                       
                    }
                    else if(op == '/')
                    {
                        result = result/lvalue; 
                    }
                }
                else
                {
                    break;
                }

            }
            return result;
        }


       Fixed parse_expr()
       {
            Fixed result = parse_term();
            while(true)
            {
                  
                char op = peek();

                if(op == '+' || op == '-')
                {

                    get();
                    Fixed lvalue = parse_term();
                    if(op == '+')
                    {
                        result = result+lvalue; 
                    }
                    else if(op == '-')
                    {
                        result = result-lvalue; 
                    }
                }
                else
                {
                    break;
                }

            }
            return result;
       }

           
    public:
        
        Eval() = default;
        Eval(const std::string& input) : expr(input) {};
        ~Eval() = default;

        Fixed eval()
        {
            return parse_expr();
        }

};





#endif