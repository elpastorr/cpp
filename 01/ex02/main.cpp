#include <iostream>
#include <string>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "STR Adress   : " << &s << std::endl;
    std::cout << "Adress in PTR: " << stringPTR << std::endl;
    std::cout << "Adress in REF: " << &stringREF << std::endl;

    std::cout << "STR Value: " << s << std::endl;
    std::cout << "PTR Value: " << *stringPTR << std::endl;
    std::cout << "REF Value: " << stringREF << std::endl;
    return (0);
}