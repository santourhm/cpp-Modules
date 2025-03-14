#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP
#define NB_CONTACTS 10
#include "Contact.hpp"


class PhoneBook
{
    private:
    
        Contact * contact;
        int counter; 

    public:

        PhoneBook();  
        ~PhoneBook();
        void addContact(Contact  &contact);
        void displayPhonebook() const;     
        void findContact(int& index) const;

};

#endif