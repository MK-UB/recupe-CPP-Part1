#include "ScavTrap.hpp"

int main()
{

    ClapTrap claptrap("CL4P");
    claptrap.attack("Targa");
    claptrap.takeDamage(4);
    claptrap.beRepaired(9);

    ScavTrap Scavtrap("SC4V");
    Scavtrap.attack("Badass Targa");
    Scavtrap.guardGate();

    return 0;
}
