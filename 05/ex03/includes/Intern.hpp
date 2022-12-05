#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &to_copy);
		~Intern();
		Intern &operator=(const Intern &to_copy);

		Form	*makeForm(const std::string request, const std::string target) const;
};

#endif
