#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "🐱Cat is Born!" << std::endl;
}

Cat::Cat(const Cat& cpy){

*this = cpy;
std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& src){

    if (this != &src)
        type = src.type;
    std::cout << "Cat copy assignment operator called!" << std::endl;
    return (*this);
}

void Cat::makeSound() const{

    std::cout << "\033[0;32m  Meoooow! \033[0m" << std::endl;
}

Cat::~Cat(){

    std::cout << "Cat Died" << std::endl;
}