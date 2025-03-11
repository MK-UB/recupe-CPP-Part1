#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

    std::cout << "\033[2;37m  constructors: \033[0m" << std::endl;
    std::cout <<"\033[2;37m ------------------------ \033[0m" << std::endl;
    
    const Animal* hayawan = new Animal();
    const Animal* kelb = new Dog();
    const Animal* mecha = new Cat();

    std::cout << "\033[2;37m getters:" << std::endl;
    std::cout <<"\033[2;37m ------------------------ \033[0m" << std::endl;

    std::cout << kelb->getType() << " " << std::endl;
    std::cout << mecha->getType() << " " << std::endl;

    std::cout << "\033[2;37m makesound methode:" << std::endl;
    std::cout <<"\033[2;37m ------------------------ \033[0m" << std::endl;

    hayawan->makeSound();
    kelb->makeSound(); 
    mecha->makeSound();

    std::cout << "\033[2;37m==============================\033[0m" << std::endl;
    std::cout << "\033[2;37mNOW TESTING WITH WRONGCAT: \033[0m" << std::endl;
    std::cout << "\033[2;37m==============================\033[0m" << std::endl;

    
    const WrongAnimal* begra = new WrongCat();
    std::cout << begra->getType() << " " << std::endl;
    begra->makeSound();

    std::cout << "\033[2;37m  destructors: \033[0m" << std::endl;
    std::cout <<"\033[2;37m ------------------------ \033[0m" << std::endl;

    delete hayawan;
    delete mecha;
    delete kelb;
    delete begra;
    
    return 0;
}