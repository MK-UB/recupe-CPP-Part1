#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

    private :
    std::string Name;

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& cpy);
        DiamondTrap& operator=(const DiamondTrap& src);
        using ScavTrap::attack;
        void whoAmI();
        ~DiamondTrap();
};
