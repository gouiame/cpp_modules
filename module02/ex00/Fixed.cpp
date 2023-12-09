/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:12:05 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/04 21:03:36 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

    const int Fixed::fraction = 8;
    Fixed::Fixed()
    {
        this->_value = 0;
        std::cout << "Default constructor called" << std::endl;
    }

    Fixed::Fixed(const Fixed& other)
    {
        std::cout << "Copy constructor called" << std::endl;
        this->_value = other.getRawBits();
    }

    Fixed::~Fixed()
    {
        std::cout << "Destructor called" << std::endl;
    }

    Fixed& Fixed::operator=(const Fixed& other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this->_value != other.getRawBits())
        {
            this->_value = other.getRawBits();
        }
        return *this;
    }

    int Fixed::getRawBits() const
    {
        std::cout << "getRawBits member function called" << std::endl;
        return this->_value;
    }

    void Fixed::setRawBits(int const raw)
    {
        this->_value = raw;
    }
