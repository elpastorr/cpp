#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
    this->name = "Fragman";
    this->hp = 100;
    this->energy = 100;
    this->ad = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << ": constructor called" << std::endl;
    this->name = name;
    this->hp = 100;
    this->energy = 100;
    this->ad = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << ": destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &to_copy) : ClapTrap(to_copy)
{
    std::cout << "FragTrap " << to_copy.name << " Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &to_copy)
{
    std::cout << "FragTrap " << to_copy.name << " Copy assignment operator called" << std::endl;
    this->ClapTrap::operator=(to_copy);
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
	std::string	highfive;

    std::cout << "FragTrap " << this->name << " wants to high five, press enter !" << std::endl;
	std::getline(std::cin, highfive);
}

void    FragTrap::attack(const std::string &target)
{
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage !" << std::endl;
        this->energy--;
    }
    else if (this->hp <= 0)
        std::cout << "FragTrap " << this->name << " is dead so he can't attack.." << std::endl;
    else
        std::cout << "FragTrap " << this->name << " has no energy so he can't attack.." << std::endl;
}
