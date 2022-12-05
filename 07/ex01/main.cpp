#include "iter.hpp"

int main(void)
{
    int int_tab[8] = {3, 1, 4, 1, 5, 9, 2, 6};
    char    char_tab[5] = {'a', 'z', 'e', 'r', 't'};
    std::string string_tab[4] = {"667", "MMS", "OVG", "EKIP"};

    std::cout << "Tests with Int Tab :" << std::endl;
    ::iter(int_tab, sizeof(int_tab) / sizeof(int_tab[0]), &print);
    ::iter(int_tab, sizeof(int_tab) / sizeof(int_tab[0]), &increment);
    std::cout << std::endl;
    ::iter(int_tab, sizeof(int_tab) / sizeof(int_tab[0]), &print);
    std::cout << std::endl << std::endl;

    std::cout << "Tests with Char Tab :" << std::endl;
    ::iter(char_tab, sizeof(char_tab) / sizeof(char_tab[0]), &print);
    ::iter(char_tab, sizeof(char_tab) / sizeof(char_tab[0]), &increment);
    std::cout << std::endl;
    ::iter(char_tab, sizeof(char_tab) / sizeof(char_tab[0]), &print);
    std::cout << std::endl << std::endl;

    std::cout << "Tests with String Tab :" << std::endl;
    ::iter(string_tab, sizeof(string_tab) / sizeof(string_tab[0]), &print);
    std::cout << std::endl;
    std::cout << "Cant increment string !" << std::endl;

    return (0);
}