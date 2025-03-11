#include "Ice.hpp"

Ice::Ice() {

    type = "ice";

}

Ice::Ice(const Ice &other) : AMateria(other) {

    type = "ice";
}

Ice &Ice::operator=(const Ice &src)
{
    (void) src;
    return *this;
}

AMateria *Ice::clone() const
{
    //new instance with same state as original like a copy constructor
    return (new Ice);
}

void Ice::use(ICharacter &target)
{
    std::cout << "༄Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}

Ice::~Ice(){
}