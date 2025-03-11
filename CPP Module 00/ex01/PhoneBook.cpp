/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:07:59 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/02 15:42:12 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    index = 0;
    ttl = 0;
    std::cout << "Welcome to MY PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook() {
    std::cout << "Defautl destructer was called." << std::endl;
}

void PhoneBook::ADD(){
    people[index == 8 ? (index = 0) : index].save_data();
    index++;
    if (ttl <= 7)
        ttl++;
}
    
void PhoneBook::SEARCH()
{
    if (index == 0)
    {
        std::cout << "Your phone book is empty, get some friends!" << std::endl;
        return ;
    }
    std::cout << " ___________________________________________" << std::endl;
    std::cout << "|" << std::setw(10) << "index"  ;
    std::cout << "|" << std::setw(10) << "first name" ;
    std::cout << "|" << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|" << std::endl;
    for (int i = 0; i < ttl; i++)
    {
        Contact *person = &people[i];
        std::cout << "|" << std::setw(10) << i+1 << "|";
        std::string first = person->getter_first();
        std::string last = person->getter_last();
        std::string nick = person->getter_nickname();
        if (first.length() > 10)
            std::cout << first.substr(0,9) << "." << "|";
        else
            std::cout << std::setw(10) << first << "|";
        if (last.length() > 10)
            std::cout << last.substr(0,9) << "." << "|";
        else
            std::cout << std::setw(10) << last << "|";
        if (nick.length() > 10)
            std::cout << nick.substr(0,9) << "." << "|";
        else
            std::cout << std::setw(10) << nick << "|";
        std::cout<< std::endl;

    }
    std::cout << " -------------------------------------------" << std::endl;
    std::string info;
    do {
    std::cout << "Enter an index in the databases: ";
    } while(std::getline(std::cin, info) && !isNumber(info))
    ;
    int indx = std::atoi(info.c_str());
    indx--;
    if (!(indx >= 0 && indx < ttl))
        std::cout << "no contact saved under this index.\n";
    else {
        std::cout << "First name: " << people[indx].getter_first() << std::endl;
        std::cout << "Last name: " << people[indx].getter_last() << std::endl;
        std::cout << "Nickname: " << people[indx].getter_nickname() << std::endl;
        std::cout << "Phone number: " << people[indx].getter_nbr() << std::endl;
        std::cout << "Darkest secret: " << people[indx].getter_dark() << std::endl;
    }
    
}
