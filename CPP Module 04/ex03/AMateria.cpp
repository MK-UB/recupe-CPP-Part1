#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string& type){

    this->type = type;
}

AMateria::AMateria(const AMateria & cpy){

    (void)cpy;
}

AMateria& AMateria::operator=(const AMateria& src){

    (void)src;
    return *this;
}

std::string const & AMateria::getType() const{

    return this->type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

AMateria::~AMateria() {}
