#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &to_copy)
{
	this->type = to_copy.type;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &to_copy)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = to_copy.type;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "Random Animal sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}
