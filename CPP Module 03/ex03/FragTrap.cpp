#include "FragTrap.hpp"

FragTrap::FragTrap (){

    std::cout << " FragTrap's default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout <<"\033[1;32m FragTrap " << name << " created & initialized! \033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
   
   std::cout << " FragTrap's assignment operator called!" << std::endl;

    // inherite claptrap's opperator:
    if  (this != &src)
        ClapTrap::operator=(src);
    return *this;
}


FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy) {

    std::cout << "FragTrap's copy constructor called!" << std::endl;
}

void FragTrap::highFivesGuys(){

    std::cout << "FragTrap " << Name << ": \033[0;35m Can I get some high fives ?? \033[0m ✋✋✋" << std::endl;
}

FragTrap::~FragTrap(){

    std::cout << "\033[1;31m FragTrap " << Name << " has been destroyed 💀 \033[0m" << std::endl; 
}