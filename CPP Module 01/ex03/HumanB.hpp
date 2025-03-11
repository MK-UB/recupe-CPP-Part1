/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:08:49 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/13 00:55:32 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB{
    
    std::string _name;
    Weapon *_weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        ~HumanB();
        void    attack();
        
};