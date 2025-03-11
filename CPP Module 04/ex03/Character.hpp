#pragma once

#include <iostream> 
#include "AMateria.hpp"
#include "MateriaSource.hpp"

// Concrete class for pure abstract class ICharacter
class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character &cpy);
        Character &operator=(const Character &src);
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        ~Character();
};