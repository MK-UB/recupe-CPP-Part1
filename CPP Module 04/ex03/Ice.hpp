#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


// Concrete class (for AMateria) representing ICE (specific type of Materia)

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &cpy);
        Ice &operator=(const Ice &src);
        void use(class ICharacter &target);
        AMateria *clone() const;
        ~Ice();
};