/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:08:53 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/13 00:59:54 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    
    std::string _name;
    Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack();
};