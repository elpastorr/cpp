#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form	
{
	private:
		const std::string	target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &to_copy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &to_copy);

		void	execute(const Bureaucrat &bureaucrat) const;
};

#endif
