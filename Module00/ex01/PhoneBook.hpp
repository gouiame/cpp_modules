/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:36:52 by cgouiame          #+#    #+#             */
/*   Updated: 2023/11/28 21:31:36 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private :
		int idx;
		int count;
		Contact contacts[8];
	public :
		PhoneBook(int idx, int count);
		~PhoneBook();
		void add();
		void search();
		void display();
		void infoscontact(std::string nb);
};
#endif
