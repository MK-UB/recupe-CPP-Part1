
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        //constructors:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& cpy);
        
        // assignment operator overload:
        ScavTrap& operator=(const ScavTrap& src);

        //destructor:
        ~ScavTrap();

        // methods:
		void attack(const std::string& target);
        void guardGate();
};

#endif