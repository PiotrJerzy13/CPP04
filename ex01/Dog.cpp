#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "Dog Assignment Operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

void Dog::setBrainIdea(int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
	return brain->getIdea(index);
}
