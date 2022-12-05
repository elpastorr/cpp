#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Clapman";
    this->hp = 10;
    this->energy = 10;
    this->ad = 0;
	std::cout << "ClapTrap "<< this->name << ": constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << ": constructor called" << std::endl;
    this->name = name;
    this->hp = 10;
    this->energy = 10;
    this->ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy)
{
    std::cout << "ClapTrap " << to_copy.name << " Copy Constructor called" << std::endl;
    *this = to_copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << ": destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &to_copy)
{
    if (&to_copy != this)
    {
        std::cout << "ClapTrap " << to_copy.name << " Copy assignment operator called" << std::endl;
        this->name = to_copy.name;
        this->hp = to_copy.hp;
        this->energy = to_copy.energy;
        this->ad = to_copy.ad;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage !" << std::endl;
        this->energy--;
    }
    else if (this->hp <= 0)
        std::cout << "ClapTrap " << this->name << " is dead so he can't attack.." << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " has no energy so he can't attack.." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp - amount <= 0)
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and is now dead !" << std::endl;
        this->hp = 0;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage !" << std::endl;
    this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp > 0 && this->energy > 0)
    {
        std::cout << "ClapTrap " << this->name << " is reparing, healing " << amount << " hp !" << std::endl;
        this->energy--;
        this->hp += amount;
    }
    else if (this->hp <= 0)
        std::cout << "ClapTrap " << this->name << " is dead so he can't repair.." << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " has no energy so he can't repair.." << std::endl;
}
