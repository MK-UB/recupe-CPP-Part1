#pragma once

#include "Animal.hpp"

class Cat : public Animal {

    public:

        Cat();
        Cat(const Cat& cpy);
        Cat& operator=(const Cat& src);
        void makeSound() const; // override 
        ~Cat();
};