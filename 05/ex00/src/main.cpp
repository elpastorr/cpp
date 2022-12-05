#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
        std::cout << "Trying to create grade 0" << std::endl;
        Bureaucrat  bob("bob", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl;

	try
	{
        std::cout << "Trying to create grade 151" << std::endl;
        Bureaucrat  billy("billy", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl;

    Bureaucrat  bob("bob", 1);
    Bureaucrat  billy("billy", 150); 

    std::cout << bob << std::endl;
	try
	{
        bob.upGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << bob << std::endl;
    bob.downGrade();
    bob.downGrade();
    std::cout << bob << std::endl << std::endl;

    std::cout << billy << std::endl;
	try
	{
        billy.downGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << billy << std::endl;
    billy.upGrade();
    billy.upGrade();
    billy.upGrade();
    billy.upGrade();
    billy.upGrade();
    std::cout << billy << std::endl;

    return 0;
}