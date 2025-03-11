/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:03 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/21 23:04:53 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpv(0){};

Fixed::Fixed(const int intVal) : _fpv(intVal << fbits){}

Fixed::Fixed(const float flVal) : _fpv(roundf(flVal * (1 << fbits))){}

Fixed::~Fixed(){};

int Fixed::toInt() const
{
    return _fpv >> fbits;
}

float Fixed::toFloat() const
{
    return ((float)_fpv) / (1 << fbits);
}

void Fixed::setRawBits(int const raw)
{
    _fpv = raw;
}

int Fixed::getRawBits( void ) const
{
    return _fpv;
}

Fixed& Fixed::operator=(Fixed const &content)
{
    _fpv =  content.getRawBits();
    return *this;
}

std::ostream& operator <<(std::ostream& oust, const Fixed& fixed)
{
    oust << fixed.toFloat();
    return oust;
}

bool	Fixed::operator >(const Fixed& content) const{
    
    return _fpv > content._fpv;
}

bool	Fixed::operator <(const Fixed& content) const{
    
    return _fpv < content._fpv;
}

bool	Fixed::operator >=(const Fixed& content) const{
    
    return _fpv >= content._fpv;
}

bool	Fixed::operator <=(const Fixed& content) const{
    
    return _fpv <= content._fpv;
}

bool	Fixed::operator !=(const Fixed& content) const{
    
    return _fpv != content._fpv;
}

Fixed Fixed::operator+(const Fixed &content) const{
    
    Fixed obj (toFloat() + content.toFloat());
    return (obj);
}

Fixed Fixed::operator-(const Fixed &content) const{

    Fixed obj (toFloat() - content.toFloat());
    return (obj);
}

Fixed Fixed::operator*(const Fixed &content) const{
    
    Fixed obj (toFloat() * content.toFloat());
    return (obj);
}

Fixed Fixed::operator/(const Fixed &content) const{
    
    Fixed obj (toFloat() / content.toFloat());
    return (obj);
}

Fixed& Fixed::operator++()
{
    ++_fpv;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed& Fixed::operator--()
{
    --_fpv;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

const Fixed& Fixed::min(const Fixed& A, const Fixed& B)
{
    return (A < B) ? A : B;  
}

const Fixed& Fixed::max(const Fixed& A, const Fixed& B)
{
    return (A > B) ? A : B;
}

const Fixed& Fixed::min( Fixed& A,  Fixed& B)
{
    return (A < B) ? A : B;  
}

const Fixed& Fixed::max( Fixed& A,  Fixed& B)
{
    return (A > B) ? A : B;  
}



