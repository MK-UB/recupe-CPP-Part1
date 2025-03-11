/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:09:23 by melayoub          #+#    #+#             */
/*   Updated: 2023/11/14 19:26:18 by melayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <fstream>
#include <string>

int main(int ac , char **av)
{
    if(ac != 4)
    {
        std::cout << "Error: Not three parameters." << std::endl;
        return 0;
    }
    std::fstream read(av[1]);
    if(!read.is_open())
    {
        std::cout << "Error: file failed to open" << std::endl;
        return 0;
    }
    std::string filename(av[1]);
    filename +=  ".repalace";
    std::ofstream  new_file(filename);
    std::string old_str(av[2]);
    std::string new_str(av[3]);
    std::string line;
    std::string buff;
    size_t i = 0;
    while(std::getline(read, line))
    {
        if(!read.eof())
            buff += line+ "\n";
        else
            buff += line;
    }
    if (old_str.length() != 0)
    {
        i = buff.find(old_str, i);
        std::string tmp;
        while ( i != std::string::npos)
        {
            tmp = buff.substr(i + old_str.length(), buff.length());
            buff = buff.substr(0, i) + new_str;
            buff +=  tmp;
            i += new_str.length();
            i = buff.find(old_str, i);
        }
    }
    new_file << buff;
    

    read.close();
    return 0;
}
