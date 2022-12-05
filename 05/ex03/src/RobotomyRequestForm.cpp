#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45), target("Unknown")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy Request", 72, 45), target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy) : Form(to_copy), target(to_copy.target)
{
	*this = to_copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &to_copy)
{
	(void)to_copy;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	int	random;

	Form::executeCheck(bureaucrat);
	std::cout << "** Drilling noises **" << std::endl;
	random = rand() % 2;
	if (random)
		std::cout << target << " was robotomized" << std::endl;
	else
		std::cout << "Robotomy on " << target << " failed !" << std::endl;
}
