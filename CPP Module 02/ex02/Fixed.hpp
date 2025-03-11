/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:13:17 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/20 20:27:52 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed{
    
        int _fpv;
        static const int fbits = 8;
    public:
        
        Fixed();
        Fixed(const int intVal);
        Fixed(const float flVal);
        ~Fixed();
        
        int     toInt() const;
		float	toFloat() const;
        Fixed& operator=(const Fixed &content);
        
        int		getRawBits( void ) const;
        void	setRawBits( int const raw );

		bool	operator >(const Fixed& content) const;
		bool	operator <(const Fixed& content) const;
		bool	operator <=(const Fixed& content) const;
		bool	operator >=(const Fixed& content) const;
		bool	operator !=(const Fixed& content) const;
		
		Fixed	operator +(const Fixed& content) const;
		Fixed	operator -(const Fixed& content) const;
		Fixed	operator *(const Fixed& content) const;
		Fixed	operator /(const Fixed& content) const;
		
		Fixed&	operator ++();
		Fixed&	operator --();
		Fixed	operator ++(int);	
		Fixed	operator --(int);
		
		static const Fixed& min(const Fixed& A, const Fixed& B);
		static const Fixed& min(Fixed& A, Fixed& B);
		static const Fixed& max(const Fixed& A, const Fixed& B);
		static const Fixed& max(Fixed& A, Fixed& B);
	
};

std::ostream& operator<<(std::ostream& oust, const Fixed& fixed);
