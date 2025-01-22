#include "Cat.hpp"

Cat::Cat() 
{
	type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat() 
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
