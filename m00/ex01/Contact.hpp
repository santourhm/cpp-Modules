#ifndef _CONTACT_HPP
#define _CONTACT_HPP
#include <string>

class Contact
{
    private:
        std::string firstName,lastName,
                    nickName, login, postalAddress, 
                    emailAddress, phoneNumber, 
                    birthdayDate, favoriteMeal, 
                    underwearColor , darkestSecret;
        int index;
    public:
        Contact() : index(0) {} ;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        int         getIndex() const ;
        void        setContact();
        void        displayContact() const;
        void        setIndex(int& index);
        bool        isEmpty();
};



#endif

