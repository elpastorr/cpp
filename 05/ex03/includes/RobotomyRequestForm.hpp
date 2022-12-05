#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
	private:
		const std::string	target;


	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &to_copy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &to_copy);

		void	execute(const Bureaucrat &bureaucrat) const;
};

#endif
