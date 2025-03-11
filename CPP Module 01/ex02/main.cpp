/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:08:33 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/15 14:42:41 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "• The memory address of the string variable is:			" << &str << std::endl;
    std::cout << "• The memory address held by stringPTR is:			" << stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF is:			" << &stringREF << std::endl;
    
    std::cout << "• The value of the string variable is:				" << str << std::endl;
    std::cout << "• The value pointed to by stringPTR is:				" << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF is:				" << stringREF << std::endl;
}
