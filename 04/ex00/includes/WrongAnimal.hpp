#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &to_copy);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &to_copy);

		void	makeSound(void) const;
		std::string	getType(void) const;
};

#endif
