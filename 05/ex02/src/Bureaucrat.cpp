#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Exception: Grade too high !");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Exception: Grade too low !");
}

Bureaucrat::Bureaucrat() : name("Unknown")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &to_copy)
{
	*this = to_copy;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &to_copy)
{
	grade = to_copy.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &instance)
{
	o << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return o;
}

const std::string	Bureaucrat::getName(void) const
{
	return name;
}

int	Bureaucrat::getGrade(void) const
{
	return grade;
}

void	Bureaucrat::upGrade(void)
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
