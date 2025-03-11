#pragma once

#include <iostream>

class Animal {

    protected: 
        std::string type;

    public:
        Animal();
        Animal(const Animal& cpy);
        Animal& operator=(const Animal& src);
        virtual void makeSound() const = 0;  //pure virtual function making this an abstract class (cant be instantiated)
        virtual ~Animal();
};
