/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:29:59 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/07 15:28:57 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed() : _value(0)
{
    std::cout<< "Default constructor called" <<std::endl;
}


Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
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

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" <<std::endl;
    this->_value = val << fraction;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called"<< std::endl;
    this->_value = roundf(val * (1 << fraction));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << fraction));
}

int Fixed::toInt( void ) const
{
    return (_value >> fraction);
}

int Fixed::getRawBits() const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

std::ostream &operator << (std::ostream &os, Fixed const &other)
{
    os << other.toFloat();
    return os;
}