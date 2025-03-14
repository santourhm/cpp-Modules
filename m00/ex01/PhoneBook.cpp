#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>


PhoneBook::PhoneBook() {
    this->contact = new Contact[NB_CONTACTS];  
    this->counter = 0;
}

PhoneBook::~PhoneBook(){
   delete [] contact;
   std::cout << "ALL CONTACTS ARE LOST" << std::endl;
}


void    PhoneBook::addContact(Contact &c){

        if(this->counter <= NB_CONTACTS - 1 ){
            c.setIndex(this->counter);
            this->contact[this->counter++] = c;
        }
        else{
            std::cout << "PhoneBook is full!\n";
        }
}


void    PhoneBook::displayPhonebook() const {
        std::cout << "================ PHONEBOOK ==================" << std::endl;
        
        std::cout << "|" << std::setw(10) << "Index" 
                << "|" << std::setw(10) << "First Name"
                << "|" << std::setw(10) << "Last Name"
                << "|" << std::setw(10) << "Nickname"
                << "|" << std::endl;
        
        std::cout << "=============================================" << std::endl;
        for (int i = 0; i < NB_CONTACTS; i++)
        {   
            if(this->contact[i].getFirstName().empty()){
                continue;
            }
            std::cout << "|" ;
            std::cout << std::setw(10) << this->contact[i].getIndex()
                    << "|" << std::setw(10) << (this->contact[i].getFirstName().length() > 10 ? 
                                                this->contact[i].getFirstName().substr(0, 9) + "." : 
                                                this->contact[i].getFirstName())
                    << "|" << std::setw(10) << (this->contact[i].getLastName().length() > 10 ? 
                                                this->contact[i].getLastName().substr(0,9) + "." : 
                                                this->contact[i].getLastName()) 
                    << "|" << std::setw(10) << (this->contact[i].getNickName().length() > 10 ? 
                                                this->contact[i].getNickName().substr(0,9) + "." : 
                                                this->contact[i].getNickName())
                    << "|" << std::endl;
        }
}


void    PhoneBook::findContact(int& index) const {

        if (index < 0 || index >= NB_CONTACTS) {
            throw std::out_of_range("Index out of range");
        }

        if (!this->contact[index].isEmpty()) {
            this->contact[index].displayContact();
            
        } else {
            std::cout << "No such Contact index" << std::endl;        
        }
}