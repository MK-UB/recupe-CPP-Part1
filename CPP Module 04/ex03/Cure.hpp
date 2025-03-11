#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "Character.hpp"

// Concrete class (for AMateria) representing CURE (specific type of Materia)

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &cpy);
        Cure &operator=(const Cure &src);
        void use(class ICharacter &target);
        AMateria *clone() const;
        virtual ~Cure();
};