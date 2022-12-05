#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy)
{
	this->type = to_copy.type;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &to_copy)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->type = to_copy.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Undefined WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
