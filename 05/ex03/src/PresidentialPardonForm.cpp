#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5), target("Unknown")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential Pardon", 25, 5), target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy) : Form(to_copy), target(to_copy.target)
{
	*this = to_copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &to_copy)
{
	(void)to_copy;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	Form::executeCheck(bureaucrat);
	std::cout << target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
