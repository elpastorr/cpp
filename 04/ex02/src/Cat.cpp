#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->Animal::type = "Cat";
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain(*to_copy.brain);
	this->Animal::type = to_copy.type;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &to_copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->brain = to_copy.brain;
	this->type = to_copy.type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW" << std::endl;
}