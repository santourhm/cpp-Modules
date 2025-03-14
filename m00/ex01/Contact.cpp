#include <iostream>
#include "Contact.hpp"






void Contact::setContact()
{
        std::cout << "Enter First Name: " << std::endl;
        std::cin >> firstName;

        std::cout << "Enter Last Name: " << std::endl ;
        std::cin>>lastName ;

        std::cout << "Enter Nickname: ";
        std::cin >> nickName;

        std::cout << "Enter Login: ";
        std::cin >> login;

        std::cout << "Enter Postal Address: ";
        std::cin >> postalAddress;

        std::cout << "Enter Email Address: ";
        std::cin >> emailAddress;

        std::cout << "Enter Phone Number: ";
        std::cin >> phoneNumber;

        std::cout << "Enter Birthday Date: ";
        std::cin >> birthdayDate;

        std::cout << "Enter Favorite Meal: ";
        std::cin >> favoriteMeal;

        std::cout << "Enter Underwear Color: ";
        std::cin >> underwearColor;

        std::cout << "Enter Darkest Secret: ";
        std::cin >> darkestSecret;
        std::cout << std::endl;

}
// const to indicate that display function won't change any instance
void Contact::displayContact() const 
{

  std::cout << "\n===== Contact Information =====" << std::endl;
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickName << std::endl;
        std::cout << "Login: " << login << std::endl;
        std::cout << "Postal Address: " << postalAddress << std::endl;
        std::cout << "Email Address: " << emailAddress << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Birthday Date: " << birthdayDate << std::endl;
        std::cout << "Favorite Meal: " << favoriteMeal << std::endl;
        std::cout << "Underwear Color: " << underwearColor << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl; 

}


void Contact::setIndex(int& index)
{
        this->index = index;
}

int Contact::getIndex() const 
{
        return this->index;
}

std::string Contact::getFirstName() const 
{ 
        return this->firstName;
}

std::string Contact::getLastName() const 
{ 
        return this->lastName;
};

std::string Contact::getNickName() const 
{ 
        return this->nickName;
};

bool Contact::isEmpty() 
{
    return this->firstName.empty() && this->lastName.empty();
}

