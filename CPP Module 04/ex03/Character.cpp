#include "Character.hpp"

Character::Character(){

    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

Character::Character(std::string name)
{
        this->name = name;
        for (int i = 0; i < 4; ++i)
            inventory[i] = NULL;
}

Character::Character(const Character &cpy) : name(cpy.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (cpy.inventory[i])
            inventory[i] = cpy.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

    // Assignment operator
Character &Character::operator=(const Character &src)
{
    if (this != &src)
    {
        // Delete existing Materias
            for (int i = 0; i < 4; ++i)
                delete inventory[i];
        // Copy name
            name = src.name;
        // Copy Materias
            for (int i = 0; i < 4; i++)
            {
                if (src.inventory[i])
                    inventory[i] = src.inventory[i]->clone();
                else
                    inventory[i] = NULL;
            }
    }
    return *this;
}
std::string const &Character::getName() const{
    
    return name;
}
void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4 && inventory[i] != m; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        // remove from inventory without deleting materia.
        inventory[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        inventory[idx]->use(target);
    }
}
Character::~Character(){
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
}