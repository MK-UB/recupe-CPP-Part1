#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    for (int i = 0; i < 4; i++)
        Learned[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* materia){

    for (int i = 0; materia != Learned[i] && i < 4; i++)
    {
        if (!Learned[i])
        {
            Learned[i] = materia;
            return;
        }
    }
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type){

    for (int i = 0; i < 4; i++)
    {
        if (Learned[i] && Learned[i]->getType() == type)
            return Learned[i]->clone();
    }
    return NULL;
}

MateriaSource ::~MateriaSource(){

    for (int i = 0; i < 4; i++)
        delete Learned[i];
}


// Copy constructor
MateriaSource::MateriaSource(const MateriaSource& cpy)
{
    for (int i = 0; i < 4; i++)
    {
        if (cpy.Learned[i])
            Learned[i] = cpy.Learned[i]->clone();
        else
            Learned[i] = NULL;
    }
}

// Copy assignment operator
MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
    if (this != &src)
    {
        // delete all existing Materias
        for (int i = 0; i < 4; i++)
        {
            delete Learned[i];
            Learned[i] = NULL;
        }

        // Copy Materias
        for (int i = 0; i < 4; i++)
        {
            if (src.Learned[i])
                Learned[i] = src.Learned[i]->clone();
        }
    }
    return *this;
}

