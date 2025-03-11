#include "Animal.hpp"

Animal::Animal() : type("Generic Animal") {

    std::cout << "Animal Born" << std::endl;
}

Animal::Animal(const Animal& cpy) : type(cpy.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
    if (this != &src)
        type = src.type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    
    std::cout << "Generic animal sound..." << std::endl;
}

Animal::~Animal(){
    
    std::cout << "Animal Died" << std::endl;
}

std::string Animal::getType() const{
    return type;
}