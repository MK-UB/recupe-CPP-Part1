#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    dog_brain = new Brain();
    std::cout << "Dog Born !" << std::endl;
}

Dog::Dog(const Dog& cpy){

dog_brain = new Brain(*cpy.dog_brain);
type = cpy.type;
std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog& src){

    if (this != &src)
    {
        delete dog_brain;
        dog_brain = new Brain(*src.dog_brain);
        type = src.type;
    }
    std::cout << "Dog copy assignment operator called!" << std::endl;
    return (*this);
}

void Dog::makeSound() const{
    
    std::cout << "\033[0;32m  WOF WOF! \033[0m" << std::endl;
}

Dog::~Dog(){

    delete dog_brain;
    std::cout << "Dog Died" << std::endl;
}