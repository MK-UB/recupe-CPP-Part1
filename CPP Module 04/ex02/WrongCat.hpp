#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

    public:
        WrongCat();
        WrongCat(const WrongCat& cpy);
        WrongCat& operator=(const WrongCat& src);
        void makeSound() const;   // override 
        ~WrongCat(); 
};