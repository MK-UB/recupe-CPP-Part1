
#include "ClapTrap.hpp"

ClapTrap::ClapTrap (): Name("Default"), Hit_points(10), Energy_points(10), Attack_damage(0){

    std::cout <<"\033[0;33m ClapTrap " << Name << " created & initialized! \033[0m" << std::endl;
}

ClapTrap::ClapTrap (std::string name) : Name(name), Hit_points(10), Energy_points(10), Attack_damage(0) {
    
    std::cout <<"\033[1;32m ClapTrap " << Name << " created & initialized! \033[0m" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &cpy){

    std::cout << " ClapTrap's copy constructor called!" << std::endl;
    *this = cpy;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
   
   std::cout << " ClapTrap assignment operator called!" << std::endl;

    // Copy values from 'src' to 'this'
    if  (this != &src)
    {
        this->Name = src.Name;
        this->Hit_points = src.Hit_points;
        this->Energy_points = src.Energy_points;
        this->Attack_damage = src.Attack_damage;
    }
    return *this;
}


// Member Functions:

void ClapTrap::attack(const std::string& target) 
{
    if (Hit_points > 0 && Energy_points > 0) 
    {
        std::cout <<  " ClapTrap " << Name << " attacks💥" << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
        std::cout << "\033[2;37m ClapTrap " << Name << " lost 1 Energy point due to Attack.\033[0m" << std::endl;
    } 
    else 
    {
        std::cout << " ClapTrap " << Name << " unable to attack, unsufisant energy or hit points..." << std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount) 
{
    //protection in case amount is a negative number since we're forced to use unsigned int, protect from overlap:
    if (amount >= INT_MAX)
    {
        std::cout << "\033[4;31m invalid input, please chose a positive amount of Hit Points to Be Repaired. \033[0m" << std::endl;
        return ;
    }
    if (Hit_points > 0 && Energy_points > 0) 
    {
        std::cout << " ClapTrap " << Name << " repairing... 🔧 | " << amount << " points retrieved!" << std::endl;
        Hit_points += amount;
        Energy_points--;
        std::cout << "\033[2;37m ClapTrap " << Name << " lost 1 Energy point due to Repair.\033[0m" << std::endl;
    }
    else 
    {
        std::cout << " ClapTrap " << Name << " can't be repaired. Not enough hit points or energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    //protection in case amount is a negative number since we're forced to use unsigned int, protect from overlap:
    if (amount >= INT_MAX)
    {
        std::cout << "\033[4;31m invalid input, please chose a positive amount of Hit Points to be Take Damage.\033[0m" << std::endl;
        return ;
    }

    if (Hit_points > 0) 
    {
        Hit_points -= amount;
        std::cout << " ClapTrap " << Name << " took " << amount << " points of damage!" << std::endl;
    } 
    else
    {
        std::cout << " ClapTrap " << Name << " has no hit points left, can't take anymore damage | Critical need of Repair!!" << std::endl;
    }
}

ClapTrap::~ClapTrap(){

    std::cout << "\033[1;31m ClapTrap " << Name << " has been destroyed 💀 \033[0m" << std::endl; 
}