/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:02:26 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/14 19:02:31 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie *horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}