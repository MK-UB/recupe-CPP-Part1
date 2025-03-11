#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const int num_animals = 4;
    delete j;
    delete i;
    std::cout << "---------------------" << std::endl;
    Animal* animals[num_animals] = {new Dog(), new Cat(), new Dog(), new Cat()};
    for (int i = 0; i < num_animals; ++i)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "---------------------" << std::endl;
    for (int i = 0; i < num_animals; ++i)
    {
        delete animals[i];
    }
    std::cout << "---------deep copy-----------" << std::endl;
    Dog dog1;
    Dog dog2(dog1);
    return 0;
}