#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal &to_copy);
		virtual ~Animal();
		Animal &operator=(const Animal &to_copy);

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif
