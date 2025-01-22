#include "Animal.hpp"
#include "../ex00/Dog.hpp"
#include "../ex00/Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* invalidAnimal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " says: ";
	dog->makeSound();

	std::cout << cat->getType() << " says: ";
	cat->makeSound();

	delete dog;
	delete cat;

	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " says: ";
	wrongCat->makeSound();

	delete wrongCat;

	return 0;
}
