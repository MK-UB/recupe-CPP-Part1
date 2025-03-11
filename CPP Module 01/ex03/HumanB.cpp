/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:07:36 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/13 01:17:54 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

    this->_weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon) {
    
    this->_weapon = &weapon;
}

void HumanB::attack(){
    
    if (this->_weapon == NULL)
        std::cout << this->_name << " has no weapon" << std::endl;
    else
        std::cout << this->_name << " attacks with their" << this->_weapon->getType() << std::endl;
    
}