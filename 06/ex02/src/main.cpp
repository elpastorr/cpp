#include <ctime>
# include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    int random;

    random = std::rand() % 3;
    if (random == 0)
        return (new A());
    if (random == 1)
        return (new B());
    return (new C());
}

void    identify(Base* p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "class : A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "class : B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "class : C" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "class : A" << std::endl;
    }
    catch(const std::exception& e) {}

    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "class : B" << std::endl;
    }
    catch(const std::exception& e) {}

    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "class : C" << std::endl;
    }
    catch(const std::exception& e) {}
}

int main(void)
{
    srand(time(NULL));
    Base    *base;

    base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}
