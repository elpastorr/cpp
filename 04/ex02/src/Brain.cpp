#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain consructor called" << std::endl;
}

Brain::Brain(const Brain &to_copy)
{
	*this = to_copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &to_copy)
{
	(void)to_copy;
	return *this;
}
