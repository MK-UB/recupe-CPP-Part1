/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:50:44 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/20 02:04:46 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed{
    
    private:
        int _fpn;
        static const int fbits = 8;
    public:
        Fixed();
        Fixed( Fixed const &cpy);
        Fixed& operator=(Fixed const &cpy);
        ~Fixed();
        int     getRawBits (void) const;
        void    setRawBits (int const raw);
};