#include "Cure.hpp"

Cure::Cure() {

    type = "cure";

}

Cure::Cure(const Cure &other) : AMateria(other) {

    type = "cure";

}

Cure &Cure::operator=(const Cure &src)
{
    (void)src;
    return *this;
}

AMateria *Cure::clone() const
{
    //new instance with same state as original like a copy constructor
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "⛑Cure: \"* heals " << target.getName() << " *\"" << std::endl;
}

Cure::~Cure(){
}