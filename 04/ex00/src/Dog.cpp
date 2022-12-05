#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->Animal::type = "Dog";
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->Animal::type = to_copy.type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &to_copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = to_copy.type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}