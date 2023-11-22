/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:36:52 by cgouiame          #+#    #+#             */
/*   Updated: 2023/11/22 20:50:20 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    public :
        PhoneBook(int idx, int count);
        int idx;
        int count;
        Contact contacts[8];
        void add();
        void search();
        void display();
        static void welcome();
        static void usageAdd();
        static void usageSearch();
        static void usageExit();
        void infoscontact(std::string nb);
};
#endif