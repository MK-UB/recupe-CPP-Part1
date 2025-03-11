/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:07:05 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/14 18:56:48 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class Zombie {

	std::string m_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		
};

Zombie* newZombie( std::string name );
void	randomChump(std::string name);