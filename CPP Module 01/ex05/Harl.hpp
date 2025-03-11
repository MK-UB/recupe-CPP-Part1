/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:55:26 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/15 14:07:46 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl{

    void warning( void );
    void debug( void );
    void info( void );
    void error( void );
    
    public:
        Harl();
        void complain( std::string level );
        ~Harl();
};
