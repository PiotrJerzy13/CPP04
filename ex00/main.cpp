#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <memory>

int main() 
{
	std::unique_ptr<Animal> meta = std::make_unique<Dog>();
	std::unique_ptr<Animal> dog = std::make_unique<Dog>();
	std::unique_ptr<Animal> cat = std::make_unique<Cat>();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	const WrongAnimal* wrong = new WrongCat();
	wrong->makeSound();

	delete wrong;

	return 0;
}
