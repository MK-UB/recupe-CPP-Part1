#pragma once

#include <iostream>

class Brain{

    std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& cpy);
        Brain &operator=(const Brain& src);
        ~Brain();
};