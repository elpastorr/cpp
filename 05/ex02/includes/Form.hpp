#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		const int	grade_sign;
		const int	grade_exec;
		bool	_signed;

	public:
		Form();
		Form(const std::string name, int grade_sign, int grade_exec);
		Form(const Form &to_copy);
		virtual ~Form();
		Form &operator=(const Form &to_copy);


		const std::string	getName(void) const;
		int		getGradeSign(void) const;
		int		getGradeExec(void) const;
		bool	getSigned(void) const;
		void	beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(const Bureaucrat &executor) const = 0;
		void	executeCheck(const Bureaucrat &bureaucrat) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class ExecNotSigned : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class FileOpeningFail : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Form &instance);

#endif
