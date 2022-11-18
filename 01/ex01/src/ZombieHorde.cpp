#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
    {
        std::cout << "You need at least 1 Zombie to create a horde..." << std::endl;
        return (NULL);
    }
    Zombie  *newHorde;
    int i = 0;

    newHorde = new Zombie[N];
    while (i < N)
        newHorde[i++].setName(name);
    return (newHorde);
}