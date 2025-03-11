/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:07:53 by melayoub          #+#    #+#             */
/*   Updated: 2023/10/30 18:33:00 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
int isNumber(std::string s);
int isAlpha(std::string s);

class PhoneBook
{
    int index;
    int ttl;
    Contact people[8];
    
    public:
        PhoneBook();
        void ADD();
        void SEARCH();
        void EXIT();
        ~PhoneBook();
};