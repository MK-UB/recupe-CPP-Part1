/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:41:52 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/02 21:22:07 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
        std::string getter_first();
        std::string getter_last();
        std::string getter_nickname();
        std::string getter_nbr();
        std::string getter_dark();
        void    save_data();
    
};