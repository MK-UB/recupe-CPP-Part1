#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    cat_brain = new Brain();
    std::cout << "Cat Born" << std::endl;
}

Cat::Cat(const Cat& cpy){

cat_brain = new Brain(*cpy.cat_brain);
type = cpy.type;
std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& src){

    if (this != &src)
    {
        delete cat_brain;
        cat_brain = new Brain(*src.cat_brain);
        type = src.type;
    }
    std::cout << "Cat copy assignment operator called!" << std::endl;
    return (*this);
}

void Cat::makeSound() const{

    std::cout << "\033[0;32m  Meoooow! \033[0m" << std::endl;
}

Cat::~Cat(){
    
    delete cat_brain;
    std::cout << "Cat Died" << std::endl;
}