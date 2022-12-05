#include "Conv.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    Conv    conv(av[1]);
    std::cout << conv;
    return (0);
}
