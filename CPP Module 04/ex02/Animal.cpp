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

Animal::~Animal(){

    std::cout << "Animal Died" << std::endl;
}
