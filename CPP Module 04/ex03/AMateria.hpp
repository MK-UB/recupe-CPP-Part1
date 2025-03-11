#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
    protected:
           std::string type;
    public:
        AMateria();
        AMateria(std::string& type);
        AMateria(const AMateria & cpy);
        AMateria& operator=(const AMateria& src);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};