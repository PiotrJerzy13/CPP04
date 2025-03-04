#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Brain Assignment Operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
	{
		ideas[index] = idea; // Store the idea
	}
	else
	{
		std::cerr << "Brain: Index out of bounds!" << std::endl;
	}
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return ideas[index]; // Retrieve the idea
	}
	else
	{
		std::cerr << "Brain: Index out of bounds!" << std::endl;
		return "";
	}
}
