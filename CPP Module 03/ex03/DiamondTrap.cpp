#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap() , FragTrap(){

    std::cout << " ScavTrap's default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), Name(name)
{
   FragTrap::Hit_points =  100;
   ScavTrap::Energy_points = 50;
   FragTrap::Attack_damage = 30;
   std::cout <<"\033[1;32m DiamondTrap " << name << " created & initialized! \033[0m" << std::endl;
} 

//member functions of diamondtrap:

void DiamondTrap::whoAmI()
{
    std::cout << "💎\033[0;34m Hello i'm Diamond, my name is " << Name << " and my ClapTrap name is " << ClapTrap::Name << "\033[0m💎" << std::endl;
}

// assingment overload and cpy const:

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) 
{   
   std::cout << " DiamondTrap's assignment operator called!" << std::endl;

    // inherite claptrap's opperator:
    if  (this != &src)
    {
        ScavTrap::operator=(src);
        FragTrap::operator=(src);
        Name = src.Name;
    }
    return *this;
}


DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ScavTrap(cpy), FragTrap(cpy), Name(cpy.Name) {

    std::cout << "DiamondTrap's copy constructor called!" << std::endl;
}

// Destructor: 

DiamondTrap::~DiamondTrap(){

    std::cout << "\033[1;31m DiamondTrap " << Name << " has been destroyed 💀 \033[0m" << std::endl; 
}