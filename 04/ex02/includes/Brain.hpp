#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &to_copy);
		~Brain();
		Brain &operator=(const Brain &to_copy);

		std::string	ideas[100];
};

#endif
