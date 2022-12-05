#include "Array.hpp"

int main(void)
{
    Array<int> numbers(10);
    Array<int> empty;

    std::cout << "Size of empty Array = " << empty.size() << std::endl;
    try
    {
        std::cout << "Accessing empty Array: " << empty[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = 10 - i;
    }
    std::cout << "Size of Array = " << numbers.size() << std::endl;
    std::cout << "Value of Array[3] = " << numbers[3] << std::endl << std::endl;

    std::cout << "Testing copy call :" << std::endl;
    Array<int>  copy(numbers);
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] != copy[i])
        {
            std::cout << "Copy didn't save the same values !" << std::endl;
            return (1);
        }
    }
    std::cout << "Copy Values are the same !" << std::endl << std::endl;

    std::cout << "Trying to access Array[-2] :";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Trying to access Array[12] :";
    try
    {
        numbers[12] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}