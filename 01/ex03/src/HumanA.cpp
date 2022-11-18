#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack( void )
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}
