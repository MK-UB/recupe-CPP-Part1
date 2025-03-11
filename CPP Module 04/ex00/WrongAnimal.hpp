#pragma once

#include <iostream>
#include <string>


class WrongAnimal{

    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal& operator=(const WrongAnimal& src);
        void makeSound() const;
        ~WrongAnimal();
        std::string getType() const;
};