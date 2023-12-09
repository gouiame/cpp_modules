/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:30:02 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/07 12:27:08 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int _value;
        static const int fraction;
    public :
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();
        
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator=(const Fixed& other);
};

std::ostream &operator << (std::ostream &os, Fixed const &other);

#endif