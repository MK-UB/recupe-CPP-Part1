#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

    public:

        FragTrap();        
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);

        FragTrap &operator=(const FragTrap &src);
        
        ~FragTrap();

        void highFivesGuys();
};