#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie = newZombie("Heap Zombie");

    zombie->announce();
    randomChump("Stack Zombie");
    delete (zombie);
    return (0);
}