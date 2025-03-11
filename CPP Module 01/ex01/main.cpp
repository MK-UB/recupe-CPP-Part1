/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:01:21 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/14 19:08:15 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* Omar = zombieHorde(10, "FLYTOOX");
    if (Omar)
    {
        for(int i=0; i < 10; i++){
            std :: cout << i << " :";
            Omar[i].announce();
        }
    }
    delete []Omar;
}
