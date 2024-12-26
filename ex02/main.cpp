#include "../ex00/Animal.hpp"
#include "../ex01/Brain.hpp"
#include "../ex01/Dog.hpp"
#include "../ex01/Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << dog->getType() << " says: ";
    dog->makeSound();

    std::cout << cat->getType() << " says: ";
    cat->makeSound();

    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound();

    delete dog;
    delete cat;
    delete wrongCat;

    return 0;
}
