#pragma once

#include "AMateria.hpp"

//interface for MateriaSource used by ICE and CURE
class IMateriaSource
{
    public:
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        virtual ~IMateriaSource() {}
};
