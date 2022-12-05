#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &to_copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &to_copy);

		void    highFivesGuys(void);
		void    attack(const std::string &target);
};

#endif
