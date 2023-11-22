/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:36:09 by cgouiame          #+#    #+#             */
/*   Updated: 2023/11/22 21:15:28 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add()
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	
	std::cout<<"Insert the first name: ";
	// std::cin >> firstname;
	std::getline(std::cin, firstname);
	std::cout<<"Insert the last name: ";
	std::getline(std::cin, lastname);
	std::cout<<"Insert the nickname: ";
	std::getline(std::cin, nickname);
	std::cout<<"Insert the phone number: ";
	std::getline(std::cin, phonenumber);
	std::cout<<"Insert the darkest secret: ";
	std::getline(std::cin, darkestsecret);
	
	if (firstname == "" || lastname == "" || nickname == "" || phonenumber == "" || darkestsecret == "")
		return ;
	this->contacts[idx].setIndex(idx);
	this->contacts[idx].setFirstName(firstname);
	this->contacts[idx].setLastName(lastname);
	this->contacts[idx].setNickName(nickname);
	this->contacts[idx].setPhoneNumber(phonenumber);
	this->contacts[idx].setDarkestSecret(darkestsecret);

	this->idx += 1;
	this->count += 1;
	if (this->idx == 8)
		this->idx = 0;
}

void	printline(std::string str)
{
	  int len = str.length();

    if (len == 10)
        std::cout<< "|" << str;
    else if (len < 10)
        std::cout << "|" << std::setw(10) << str;
    else
        std::cout << "|" << str.substr(0, 9) << ".";
}

void	PhoneBook::display()
{
	int i = 0;
	int nb;

	if(this->count >= 8)
		nb = 8;
	else
		nb = this->idx;
	while(i < nb)
	{
		std::cout << "         " << this->contacts[i].getIndex();
		printline(this->contacts[i].getFirstName());
		printline(this->contacts[i].getLastName());
		printline(this->contacts[i].getNickName());
		std::cout << "|" << std::endl;
		i++;
	}
}

void	PhoneBook::infoscontact(std::string nb)
{
	int i = nb[0] - '0';
	std::cout << "Index			: " << this->contacts[i].getIndex() << std::endl;
	std::cout << "First Name		: " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name		: " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nickname		: " << this->contacts[i].getNickName() << std::endl;
	std::cout << "Phone Number		: " << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret		: " << this->contacts[i].getDarkestSecret() << std::endl;
}

void    PhoneBook::search()
{
	std::string index_c;
	int	idx;
	if (this->count == 0)
	{
		std::cout << "Add some contacts to bring your phonebook to life!"<<std::endl;
		return ;
	}
	display();
	std::cout << "Please enter the contact index : ";
	std::cin >> index_c;
	if (index_c.length() != 1 || index_c[0] < 48 || index_c[0]> 55)
	{
		std::cout << "Index not found. Please try again.";
		return ;
	}
	idx = index_c[0] - '0';
	if (idx >= this->count)
    {
        std::cout << "Index not found. Please try again." << std::endl;
        return;
    }
	infoscontact(index_c);
}

PhoneBook::PhoneBook(int idx, int count)
{
	this->idx = idx;
	this->count = count;
}

void	welcome()
{
	std::cout << std::endl;
	std::cout<<"          ************************************************************"<<std::endl;
	std::cout<<"          *             Welcome to your Awesome PhoneBook            *"<<std::endl;
	std::cout<<"          ************************************************************"<<std::endl;
	std::cout<<"          * Explore your contacts seamlessly:                        *"<<std::endl;
	std::cout<<"          *  - To add a new contact, type 'ADD'.                     *"<<std::endl;
	std::cout<<"          *  - To find a contact, type 'SEARCH'.                     *"<<std::endl;
	std::cout<<"          *  - To exit, simply type 'EXIT'.                          *"<<std::endl;
	std::cout<<"          ************************************************************"<<std::endl;
}

int main ()
{
	PhoneBook Pb(0, 0);
	std::string cmd; 

	welcome();
	while (std::getline(std::cin, cmd))
	{
		if(cmd == "ADD")
			Pb.add();
		if(cmd == "SEARCH")
		    Pb.search();
		if(cmd == "EXIT")
			return 0;
	}
}
