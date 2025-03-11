/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:09:01 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/13 01:16:29 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    
    this->type = type;
}

Weapon::~Weapon(){}

std::string const &Weapon::getType(){
    
        return (this->type);
}

void Weapon::setType(std::string type){
    
    this->type = type;
}