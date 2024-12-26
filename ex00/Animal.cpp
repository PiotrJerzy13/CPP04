#include "Animal.hpp"

Animal::Animal() : type("Animal") 
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) 
{
    *this = other;
    std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) 
{
    if (this != &other) 
	{
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() 
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const 
{
    std::cout << "Animal makes a generic sound!" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}
