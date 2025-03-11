#pragma once

#include "Animal.hpp"

class Dog : public Animal {

    public:
        Dog();
        Dog(const Dog& cpy);
        Dog& operator=(const Dog& src);
        void makeSound() const;  // override 
        ~Dog();
};