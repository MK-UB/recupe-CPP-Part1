#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

    Brain *cat_brain;

    public:

        Cat();
        Cat(const Cat& cpy);
        Cat& operator=(const Cat& src);
        void makeSound() const; // override 
        ~Cat();
};