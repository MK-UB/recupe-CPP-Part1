#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("hunter");

    clap.attack("DJ");
    clap.takeDamage(3);
    clap.beRepaired(-9);

    return 0;
}
