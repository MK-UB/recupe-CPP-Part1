#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "Idea " + std::to_string(i + 1);
    std::cout << "Brain created!" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
    for (int i = 0; i < 100; ++i)
        ideas[i] = cpy.ideas[i];
    std::cout << "Brain copy constructor done!" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = src.ideas[i];
    }
    std::cout << "Brain's copy assignment opperator called!" << std::endl;
    return *this;
}


Brain::~Brain()
{
    std::cout << "Brain destroyed!" << std::endl;
}