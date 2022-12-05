#include "ScavTrap.hpp"

int main()
{
    ClapTrap    Bob("Bob");
    ScavTrap    Joe("Joe");

    Bob.attack("Joe");
    Bob.beRepaired(2);
    Joe.takeDamage(21);

    Joe.attack("Bob");
    Bob.takeDamage(20);
    Joe.beRepaired(5);
    Joe.guardGate();

    return 0;
}
