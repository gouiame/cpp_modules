/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:50:56 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/07 15:58:50 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed() : _value(0){}


Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

 Fixed& Fixed::operator=(const Fixed& other)
{
    if (this->_value != other.getRawBits())
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const int val)
{
    this->_value = val << fraction;
}

Fixed::Fixed(const float val)
{
    this->_value = std::roundf(val * (1 << fraction));
}
Fixed::~Fixed(){}

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

bool Fixed::operator < (const Fixed &other) const
{
    if(this->_value < other._value)
        return true;
    return false;
}
bool Fixed::operator > (const Fixed &other) const
{
    if(this->_value > other._value)
        return true;
    return false;
}
bool Fixed::operator >= (const Fixed &other) const
{
    if(this->_value >= other._value)
        return true;
    return false;
}
bool Fixed::operator <= (const Fixed &other) const
{
    if(this->_value <= other._value)
        return true;
    return false;
}
bool Fixed::operator == (const Fixed &other) const
{
    if(this->_value == other._value)
        return true;
    return false;
}
bool Fixed::operator != (const Fixed &other) const
{
    if(this->_value != other._value)
        return true;
    return false;
}

Fixed Fixed::operator + (const Fixed &other) const
{
    Fixed result;
    result._value = this->_value + other._value;
    return (result);
}

Fixed Fixed::operator - (const Fixed &other) const
{
    Fixed result;
    result._value = this->_value - other._value;
    return (result);
}

Fixed Fixed::operator * (const Fixed &other) const
{
    Fixed result;
    float f_result = this->toFloat() * other.toFloat();
    result._value = (f_result* (1<< fraction));
    return (result);
}

Fixed Fixed::operator / (const Fixed &other) const
{
    Fixed result;
    result._value = (this->_value / other._value) * (1 << fraction);
    return (result);
}

Fixed Fixed::operator ++ (int )
{
	Fixed tmp(*this);
	this->_value++;
	return tmp;
}

Fixed Fixed::operator -- (int )
{
	Fixed tmp(*this);
	this->_value--;
	return tmp;
}

Fixed & Fixed::operator ++ (void )
{
	this->_value++;
	return *this;
}

Fixed & Fixed::operator -- (void )
{
	this->_value--;
	return *this;
}


Fixed&   Fixed::min(Fixed &a, Fixed &b)
{
    if(a._value < b._value)
		return a;
	return b;
}

Fixed&   Fixed::max(Fixed &a, Fixed &b)
{
    if(a._value > b._value)
		return a;
	return b;
}

const   Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a._value < b._value)
		return a;
	return b;
}

const Fixed&   Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a._value > b._value)
		return a;
	return b;
}