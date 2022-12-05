#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int	grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &to_copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &to_copy);

		const std::string	getName(void) const;
		int	getGrade(void) const;
		void	upGrade(void);
		void	downGrade(void);
		void	signForm(Form &form) const;

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

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &instance);

#endif
