#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->name = name;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::attack( void )
{
    if (this->weapon == NULL || this->weapon->getType().empty())
        std::cout << this->name << " has no weapon..." << std::endl;
    else
        std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &weapon )
{
    this->weapon = &weapon;
}
