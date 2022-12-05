#include "Form.hpp"

Form::Form() : name("Unknown"), grade_sign(150), grade_exec(150), _signed(false)
{
	return ;
}

Form::Form(const std::string name, int grade_sign, int grade_exec) : name(name), grade_sign(grade_sign), grade_exec(grade_exec), _signed(false)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw GradeTooLowException();
}


Form::Form(const Form &to_copy) : name(to_copy.name), grade_sign(to_copy.grade_sign), grade_exec(to_copy.grade_exec), _signed(to_copy._signed)
{
	*this = to_copy;
}

Form::~Form()
{
	return ;
}

Form	&Form::operator=(const Form &to_copy)
{
	_signed = to_copy._signed;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Form &instance)
{
	o << "Form " << instance.getName() << ": grade sign = " << instance.getGradeSign() << ", grade exec = " << instance.getGradeExec() << ", signed status = " << instance.getSigned();
	return o;
}

const std::string	Form::getName(void) const
{
	return name;
}

int		Form::getGradeSign(void) const
{
	return grade_sign;
}

int		Form::getGradeExec(void) const
{
	return grade_exec;
}

bool	Form::getSigned(void) const
{
	return _signed;
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > grade_sign)
		throw GradeTooLowException();
	_signed = true;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Exception: Grade too high for this form !");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Exception: Grade too low for this form !");
}
