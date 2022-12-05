#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	bob("Bob", 21);
	Form	form("Form", 20, 5);

	std::cout << bob << std::endl;
	std::cout << form << std::endl;

	bob.signForm(form);
	bob.upGrade();
	bob.signForm(form);

    return 0;
}