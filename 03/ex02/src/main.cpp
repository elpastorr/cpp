#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    Bob("Bob");
    ScavTrap    Joe("Joe");
    FragTrap    Billy("Billy");

    Bob.attack("Joe");
    Joe.takeDamage(0);
    Bob.beRepaired(0);

    Joe.attack("Billy");
    Billy.takeDamage(20);
    Joe.beRepaired(10);
    Joe.guardGate();

    Billy.attack("Bob");
    Bob.takeDamage(30);
    Billy.beRepaired(15);
    Billy.highFivesGuys();

    return 0;
}