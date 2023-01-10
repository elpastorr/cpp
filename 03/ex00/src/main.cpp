#include "ClapTrap.hpp"

int main()
{
    ClapTrap    Bob("Bob");
    ClapTrap    Joe("Joe");

    Bob.attack("Joe");
    Bob.takeDamage(4);
    Bob.beRepaired(2);

    Joe.takeDamage(11);
    Joe.attack("Bob");
    Joe.beRepaired(2);

    return 0;
}
