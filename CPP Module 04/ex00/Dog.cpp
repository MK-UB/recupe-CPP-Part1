#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
       std::cout << "🐶Dog is Born!" << std::endl;
}

Dog::Dog(const Dog& cpy){

type = cpy.type;
std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog& src){

    if (this != &src)
        type = src.type;
    std::cout << "Dog copy assignment operator called!" << std::endl;
    return (*this);
}

void Dog::makeSound() const{
    
    std::cout << "\033[0;32m  WOF WOF! \033[0m" << std::endl;
}

Dog::~Dog(){

    std::cout << "Dog Died" << std::endl;
}