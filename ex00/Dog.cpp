#include "Dog.hpp"

Dog::Dog() 
{
	type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Woof! Woof!" << std::endl;
}
