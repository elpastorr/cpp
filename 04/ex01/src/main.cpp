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

    std::cout << std::endl;
    const Animal    *(animals[4]);
    std::cout << std::endl;
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    std::cout << std::endl;
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    for (int i = 0; i < 4; i++)
    {
        std::cout << std::endl;
        animals[i]->makeSound();
        delete animals[i];
    }
    std::cout << std::endl << "Deep copy :" << std::endl;
	Cat	cat1;
	Cat	cat2;
	cat2 = cat1;
	std::cout << std::endl;

	Dog	dog1;
	Dog	dog2(dog1);
    return 0;
}