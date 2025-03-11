/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:50:55 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/20 18:24:48 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fpn = 0;
}

Fixed& Fixed::operator=(Fixed const &cpy){

    std::cout << "Copy assignment operator called" << std::endl;
    _fpn = cpy.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const &cpy){

    std::cout<< "Copy constructor called" << std::endl;
    *this = cpy;
}

void    Fixed::setRawBits(int const raw){

    _fpn = raw;
}

int     Fixed::getRawBits( void ) const{

    std::cout << "getRawBits member function called" << std::endl;
    return this->_fpn;
}

Fixed::~Fixed(){

    std::cout<< "Destructor called" << std::endl;
}

