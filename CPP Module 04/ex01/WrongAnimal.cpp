#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

    std::cout << "WrongAnimal is born." << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy): type(cpy.type){ //why different from reg anumal ??

    std::cout << "WrongAnimal's copy constructor called !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src){

    if (this != &src)
        type = src.type;
    std::cout << "WrongAnimal's copy assignment operator called!" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const{
    
    std::cout<< "WrongAnimal's generic sound..." << std::endl;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "WrongAnimal Died." << std::endl;
}
