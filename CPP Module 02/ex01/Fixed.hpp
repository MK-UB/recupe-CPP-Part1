/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:49:48 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/20 01:52:57 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
        int _fpv;
        static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const int intVal);
    Fixed(float const floatVal);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(Fixed const &_new);
    void    setRawBits (int const raw);
    int     getRawBits (void) const;
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& oust, const Fixed& fpn);