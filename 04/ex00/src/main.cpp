#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << std::endl;
    std::cout << cat->getType() << ": ";
    cat->makeSound();
    std::cout << dog->getType() << ": ";
    dog->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    delete dog;
    delete cat;
    delete meta;

    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << wrongcat->getType() << ": ";
    wrongcat->makeSound();
    delete wrongcat;
    return 0;
}