/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:25 by admin             #+#    #+#             */
/*   Updated: 2023/11/03 12:39:18 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>


int main(int ac , char **av)
{
    std::string hld;
    if (ac == 1)
        std::cout << "* LOUD AND UNBDERABLE FEEDBACK NOISE *" ;
    else
    {
        for(int i = 1; av[i]; i++)
        {
            hld = av[i];
            for(int j = 0; av[i][j]; j++)
                std::cout<< (char)toupper(hld[j]);
        }
    }
    std::cout << std::endl;
}