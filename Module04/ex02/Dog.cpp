/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:37:20 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/13 18:37:22 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout<< "Dog Default contructor called" <<std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
    std::cout<<"Dog copy constructor called"<<std::endl;
    this->type = copy.type;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain[i] = copy.brain[i];
}

Dog & Dog::operator=(const Dog &copy)
{
    // std::cout<<"Dog assignment operator called"<<std::endl;
    this->type = copy.type;
    if (this->brain)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain[i] = copy.brain[i];
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called"<<std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout <<"... Woof! Woof! ..."<<std::endl;
}