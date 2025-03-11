#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

    Brain *dog_brain;

    public:
        Dog();
        Dog(const Dog& cpy);
        Dog& operator=(const Dog& src);
        void makeSound() const; // override 
        ~Dog();
};