/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:33:31 by melayoub          #+#    #+#             */
/*   Updated: 2023/10/30 18:33:33 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int isNumber(std::string s) {

    if (!s.length())
        return 0;
    for (int i = 0; i < (int)s.length(); i++)
        if (!isnumber(s[i]))
            return 0;
    return 1;
}

int isAlpha(std::string s){
    if(!s.length())
        return 0;
    for (int i = 0; i < (int)s.length(); i++)
        if (!isalpha(s[i]))
            return 0;
    return (1);
}

void    Contact::save_data() {
    do {
    std::cout << "Enter firstname: ";
    } while (std::getline(std::cin, first_name) && !isAlpha(first_name))
        ;
    do {
    std::cout << "Enter Lastname: ";
    } while (std::getline(std::cin, last_name) && !isAlpha(last_name))
        ;
    do {
    std::cout << "Enter Nickname: ";
    } while (std::getline(std::cin, nickname) && !nickname.length())
        ;
    do {
    std::cout << "Enter Number phone: ";
    } while (std::getline(std::cin, phone_number)  && !isNumber(phone_number))
        ;
    do {
    std::cout << "Enter Darkest secret: ";
    } while (std::getline(std::cin, darkest_secret) && !darkest_secret.length())
        ;
    std::cout << std::endl;
}

std::string Contact::getter_first()
{
    return(first_name);
}
std::string Contact::getter_last()
{
    return(last_name);
}
std::string Contact::getter_nickname()
{
    return(nickname);
}

std::string Contact::getter_nbr()
{
    return(phone_number);
}

std::string Contact::getter_dark()
{
    return (darkest_secret);
};