#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
    this->name = "Scavman";
    this->hp = 100;
    this->energy = 50;
    this->ad = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << ": constructor called" << std::endl;
    this->name = name;
    this->hp = 100;
    this->energy = 50;
    this->ad = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << ": destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &to_copy) : ClapTrap(to_copy)
{
    std::cout << "ScavTrap " << to_copy.name << " Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &to_copy)
{
    std::cout << "ScavTrap " << to_copy.name << " Copy assignment operator called" << std::endl;
    this->ClapTrap::operator=(to_copy);
    return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " entered in Gate keeper mode !!" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage !" << std::endl;
        this->energy--;
    }
    else if (this->hp <= 0)
        std::cout << "ScavTrap " << this->name << " is dead so he can't attack.." << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " has no energy so he can't attack.." << std::endl;
}
