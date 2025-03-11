#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}












































// void ft(){
    
//         system ("leaks Inter");
// }

// int main()
// {
//     atexit(ft);
//     IMateriaSource* src = new MateriaSource();
//     IMateriaSource *d(src);
//     d->learnMateria(new Ice());
//     d->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = d->createMateria("ice");
//     me->equip(tmp);
//     tmp = d->createMateria("cure");     
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");     
//     me->use(0, *bob);     
//     me->use(1, *bob);
//     delete bob;     
//     delete me;
//     delete src;
    
//     return 0;
// }
