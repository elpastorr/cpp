#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog();
		Dog(const Dog &to_copy);
		~Dog();
		Dog &operator=(const Dog &to_copy);

		void	makeSound(void) const;
};

#endif
