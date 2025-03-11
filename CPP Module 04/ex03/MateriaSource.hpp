#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

        AMateria *Learned[4];

    public:
        MateriaSource();
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
        
        // For canonical purposes 🙄
        MateriaSource(MateriaSource const &cpy);
        MateriaSource& operator=(const MateriaSource& src);
};