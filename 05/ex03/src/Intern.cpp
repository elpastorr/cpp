#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern &to_copy)
{
	*this = to_copy;
}

Intern::~Intern()
{
	return ;
}

Intern	&Intern::operator=(const Intern &to_copy)
{
	(void)to_copy;
	return *this;
}

Form	*Intern::makeForm(const std::string request, const std::string target) const
{
	const std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*newForm = NULL;
	int	choosen = -1;

	for (int i = 0; i < 3; i++)
	{
		if (request == forms[i])
		{
			choosen = i;
			break ;
		}
	}
	switch (choosen)
	{
	case 0:
		newForm = new ShrubberyCreationForm(target);
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		break;
	case 1:
		newForm = new RobotomyRequestForm(target);
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		break;
	case 2:
		newForm = new PresidentialPardonForm(target);
		std::cout << "Intern creates  PresidentialPardonForm" << std::endl;
		break;
	default:
		std::cout << "Intern created nothing, " << request << " doesn't exists !" << std::endl;
	}
	return (newForm);	
}
