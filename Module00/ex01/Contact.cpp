#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}
void		Contact::setIndex(int Index)
{
    this->Index = Index;
}

void		Contact::setFirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}

void		Contact::setLastName(std::string LastName)
{
    this->LastName = LastName;
}

void		Contact::setNickName(std::string NickName)
{
    this->NickName = NickName;
}

void		Contact::setPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}

void		Contact::setDarkestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}


int		Contact::getIndex()
{
    return (this->Index);
}

std::string	Contact::getFirstName()
{
    return this->FirstName;
}

std::string	Contact::getLastName()
{
    return this->LastName;
}

std::string	Contact::getNickName()
{
    return this->NickName;
}

std::string	Contact::getPhoneNumber()
{
    return this->PhoneNumber;
}

std::string	Contact::getDarkestSecret()
{
    return this->DarkestSecret;
}