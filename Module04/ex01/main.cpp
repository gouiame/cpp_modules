/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:55:25 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/13 18:47:52 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout<<"------------"<<std::endl;
	const Animal* (animal_arr[6]);
	for(int i = 0; i < 3; i++)
		animal_arr[i] = new Dog();
	std::cout<<"------------"<<std::endl;
	for(int i = 3; i < 6; i++)
		animal_arr[i] = new Cat();
	std::cout<<"------------"<<std::endl;
	for(int i = 0; i < 6; i++)
		delete animal_arr[i];
	std::cout<<"------------"<<std::endl;
	delete j;
	delete i;
	return 0;
}