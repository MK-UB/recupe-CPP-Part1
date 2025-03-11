/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:08:45 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/13 01:01:53 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType();
        void setType(std::string type);
};