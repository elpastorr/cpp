#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << std::endl;
    std::cout << cat->getType() << ": ";
    cat->makeSound();
    std::cout << dog->getType() << ": ";
    dog->makeSound();

    std::cout << std::endl;
    delete dog;
    delete cat;

    return 0;
}