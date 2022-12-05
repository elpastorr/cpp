#include "Intern.hpp"

int main(void)
{
	srand(time(NULL));

	Intern	internman;

	Form	*form1 = internman.makeForm("shrubbery creation", "jardin");
	Bureaucrat	bob("bob", 138);
	Form	*form2 = internman.makeForm("robotomy request", "Bender");
	Bureaucrat	billy("billy", 46);
	Form	*form3 = internman.makeForm("presidential pardon", "Barnaby");
	Bureaucrat	bobby("bobby", 5);
	Form	*form4 = internman.makeForm("random", "Barnaby");


	std::cout << std::endl << form4 << std::endl;

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