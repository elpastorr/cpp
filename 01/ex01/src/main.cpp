#include "Zombie.hpp"

int main(void)
{
    Zombie  *horde;
    std::string str = "Bianca";
    int i = 0;

    horde = zombieHorde(10, "Bernard");
    while (i < 10)
        horde[i++].announce();
    delete[] horde;
    i = 0;
    horde = zombieHorde(15, str);
    while (i < 15)
        horde[i++].announce();
    delete[] horde;
    return (0);
}