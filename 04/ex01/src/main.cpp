#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* dog = new Dog();
    std::cout << std::endl;
    const Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << std::endl;

    delete dog;
    std::cout << std::endl;
    delete cat;

    return 0;
}