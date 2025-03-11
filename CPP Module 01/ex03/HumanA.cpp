/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:07:21 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/13 01:17:09 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

}

HumanA::~HumanA(){}

void HumanA::attack(){
    
    std::cout << this->_name << " attacks with their" << this->_weapon.getType() << std::endl;
}