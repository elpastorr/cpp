#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat();
		Cat(const Cat &to_copy);
		~Cat();
		Cat &operator=(const Cat &to_copy);

		void	makeSound(void) const;
};

#endif
