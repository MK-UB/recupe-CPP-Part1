/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:08:14 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/12 18:08:16 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->m_name = name;
}
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->m_name << " died" << std::endl; 
}

void	Zombie::announce()
{
        std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    m_name = name;
}