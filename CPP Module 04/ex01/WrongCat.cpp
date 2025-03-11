#include "WrongCat.hpp"

WrongCat::WrongCat(){

    type = "WrongCat";
    std::cout << "🐱WrongCat is born." << std::endl;

}

WrongCat::WrongCat(const WrongCat& cpy){

    type = cpy.type;
    std::cout << "WrongCat's copy constructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src){

    if (this != &src)
        type = src.type;
    std::cout << "WrongCat's copy assignment operator called!" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const{
    
    std::cout<< "033[0;32m MOOOOOH \033[0m" << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << "WrongCat Died." << std::endl;
}
