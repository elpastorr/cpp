#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &to_copy) : WrongAnimal(to_copy)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->WrongAnimal::type = to_copy.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &to_copy)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	this->type = to_copy.type;
	return *this;
}
