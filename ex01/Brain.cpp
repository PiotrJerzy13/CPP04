#include "Brain.hpp"

// Default Constructor
Brain::Brain() {
    std::cout << "Brain Default Constructor called" << std::endl;
}

// Copy Constructor
Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy Constructor called" << std::endl;
}

// Assignment Operator
Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain Assignment Operator called" << std::endl;
    return *this;
}

// Destructor
Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

// Set Idea
void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}

// Get Idea
std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "Invalid Index";
}
