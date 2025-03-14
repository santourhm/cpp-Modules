#include <iostream>
#include <string>
#include <limits>
#include <csignal>
#include "PhoneBook.hpp"
#include "Contact.hpp"


// static in struct conserve the the value of value of the feild amonug all 
// instence of the struct it works exacly like a Class
struct CMD
{   
    static const std::string ADD ;
    static const std::string EXIT ;
    static const std::string SEARCH;
};

const std::string CMD::ADD = "ADD";
const std::string CMD::EXIT = "EXIT";
const std::string CMD::SEARCH = "SEARCH";

PhoneBook *globalPhoneBook = nullptr;

void signalHandler(int signum) {
    if (globalPhoneBook != nullptr) {
        delete globalPhoneBook;
        globalPhoneBook = nullptr;
    }
    exit(signum);
}


int main(){

    PhoneBook f = PhoneBook();
    globalPhoneBook = &f;
    signal(SIGINT,signalHandler);

   

    while (true)
    {   
        
       /*  char ch;
        std::string input;
        std::cout << "Enter your command (ADD, SEARCH, EXIT): ";
        while(std::cin.get(ch)){
            if(std::isalpha(static_cast<char>(ch))){
                input+=ch;
            }
            if (ch == '\n')
            {
                break;
            }
        }  */
        std::string input;
        std::cout << "\001\033[1;34m\002 PhoneBook> \001\033[0;0m\002 ";
        std::getline(std::cin, input);
        if(!input.compare(CMD::ADD)){
            Contact c = Contact() ;
            c.setContact();
            f.addContact(c);
        }
        else if(!input.compare(CMD::SEARCH))
        {
            int index;
            f.displayPhonebook();
            std::cout << "Enter your index : ";
            std::cin >> index;
            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a valid integer: " <<std::endl;
            }
            else
            {
                f.findContact(index);
            }

        }
        else if(!input.compare(CMD::EXIT)){
            return 0;
        }
        else{
            std::cout<< "Invalid Command!" << std::endl;
        }
    }
    
}