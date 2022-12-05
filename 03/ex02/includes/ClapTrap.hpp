#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hp;
        int energy;
        int ad;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &to_copy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &to_copy);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif