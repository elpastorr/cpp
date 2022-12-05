#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	srand(time(NULL));

	Form	*form1 = new ShrubberyCreationForm("jardin");
	Bureaucrat	bob("bob", 138);
	Form	*form2 = new RobotomyRequestForm("Bender");
	Bureaucrat	billy("billy", 46);
	Form	*form3 = new PresidentialPardonForm("Barnaby");
	Bureaucrat	bobby("bobby", 5);

	bob.executeForm(*form1);
	bob.signForm(*form1);
	bob.executeForm(*form1);
	billy.executeForm(*form1);

	std::cout << std::endl;

	billy.executeForm(*form2);
	billy.signForm(*form2);
	billy.executeForm(*form2);
	bobby.executeForm(*form2);

	std::cout << std::endl;

	bobby.executeForm(*form3);
	bobby.signForm(*form3);
	bobby.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;

    return 0;
}