/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:45:37 by melayoub          #+#    #+#             */
/*   Updated: 2023/10/30 18:32:27 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook contact;
    std::string input;

    while (!std::cin.eof()) {
        std::cout << "Enter a parameter: ";
        std::getline(std::cin, input);
        if (input == "ADD")
            contact.ADD();
        else if (input == "SEARCH")
            contact.SEARCH();
        else if (input == "EXIT")
            exit(0);
    }
    std::cout << std::endl;
    return (0);
}