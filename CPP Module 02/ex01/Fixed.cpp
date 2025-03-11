/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:50:16 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/20 20:33:55 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : _fpv(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &_new){

    std::cout << "Copy assignment operator called" << std::endl;
    _fpv =  _new.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const &_new){

    std::cout<< "Copy constructor called" << std::endl;
    *this = _new;
}

Fixed::Fixed(const int intVal) : _fpv(intVal << fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatVal) : _fpv(roundf(floatVal * (1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
    _fpv = raw;
}

int Fixed::getRawBits( void ) const
{
    return _fpv;
}

int Fixed::toInt() const
{
    return _fpv >> fractionalBits;
}

float Fixed::toFloat() const
{
    return (_fpv + 0.0) / (1 << fractionalBits);
}

std::ostream& operator <<(std::ostream& oust, const Fixed& fpn)
{
    oust << fpn.toFloat();
    return oust;
}
