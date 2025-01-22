#include "Dog.hpp"

int main()
{
	Dog dog1;

	dog1.setBrainIdea(0, "Chase the cat");
	dog1.setBrainIdea(1, "Bark at the mailman");


	std::cout << "Dog1 Idea 0: " << dog1.getBrainIdea(0) << std::endl;
	std::cout << "Dog1 Idea 1: " << dog1.getBrainIdea(1) << std::endl;

	return 0;
}

