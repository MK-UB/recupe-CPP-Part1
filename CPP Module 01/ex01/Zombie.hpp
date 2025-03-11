/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:08:21 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/14 19:01:17 by melayoub         ###   ########.fr       */
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
		void setName(std::string name);
		void announce(void);
		
};

Zombie* zombieHorde(int N, std::string name);