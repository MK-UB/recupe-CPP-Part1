#include "ScavTrap.hpp"

//constructors for scavtrap:

ScavTrap::ScavTrap (){

    std::cout << " ScavTrap's default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout <<"\033[1;32m ScavTrap " << name << " created & initialized! \033[0m" << std::endl;
}

//member functions of scavtrap:

void ScavTrap::attack(const std::string& target) 
{
    if (Hit_points > 0 && Energy_points > 0) 
    {
        std::cout <<  " ScavTrap " << Name << " attacks🌪️ " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
        std::cout << "\033[2;37m ScavTrap " << Name << " lost 1 Energy point due to Attack.\033[0m" << std::endl;
    } 
    else 
    {
        std::cout << " ScavTrap " << Name << " unable to attack, unsufisant energy or hit points..." << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap " << Name << " is now in Gatekeeper mode! 🛡️" << std::endl;
}

// assingment overload and cpy const:

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
   
   std::cout << " ScavTrap's assignment operator called!" << std::endl;

    // inherite claptrap's opperator:
    if  (this != &src)
        ClapTrap::operator=(src);
    return *this;
}


ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy) {

    std::cout << "ScavTrap's copy constructor called!" << std::endl;
}

// Destructor: 

ScavTrap::~ScavTrap(){

    std::cout << "\033[1;31m ScavTrap " << Name << " has been destroyed 💀 \033[0m" << std::endl; 
}