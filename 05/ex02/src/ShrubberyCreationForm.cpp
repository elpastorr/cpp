#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137), target("Unknown")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery Creation", 145, 137), target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy) : Form(to_copy), target(to_copy.target)
{
	*this = to_copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &to_copy)
{
	(void)to_copy;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	std::ofstream	file;

	Form::executeCheck(bureaucrat);
	file.open((target + "_shrubbery").c_str());
	if (!file)
		throw FileOpeningFail();
	file << "                                                      ." << std::endl;
	file << "                                              .         ;  " << std::endl;
	file << "                .              .              ;%     ;;   " << std::endl;
	file << "                  ,           ,                :;%  %;   " << std::endl;
	file << "                   :         ;                   :;%;'     .,   " << std::endl;
	file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "            ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "                   `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	file << "                            ;@%. :@%%  %@@%;       " << std::endl;
	file << "                              %@bd%%%bd%%:;     " << std::endl;
	file << "                                #@%%%%%:;;" << std::endl;
	file << "                                %@@%%%::;" << std::endl;
	file << "                                %@@@%(o);  . '         " << std::endl;
	file << "                                %@@@o%;:(.,'         " << std::endl;
	file << "                            `.. %@@@o%::;         " << std::endl;
	file << "                               `)@@@o%::;         " << std::endl;
	file << "                                %@@(o)::;        " << std::endl;
	file << "                               .%@@@@%::;         " << std::endl;
	file << "                               ;%@@@@%::;.          " << std::endl;
	file << "                              ;%@@@@%%:;;;. " << std::endl;
	file << "                          ...;%@@@@@%%:;;;;,.. " << std::endl;
	file.close();
}
