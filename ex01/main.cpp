#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Dog dog1;
    dog1.makeSound();

    Dog dog2 = dog1;
    dog2.makeSound();

    Dog dog3;
    dog3 = dog1;
    dog3.makeSound();

    return 0;
}
