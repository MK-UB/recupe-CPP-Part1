/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:07:11 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/12 18:07:14 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->m_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->m_name << " died" << std::endl; 
}

void	Zombie::announce()
{
        std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}