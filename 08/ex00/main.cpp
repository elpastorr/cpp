#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>


int main(void)
{
    std::vector<int>    vector;
    std::list<int>  list;
    std::deque<int> deque;


    for (int i = 0; i < 10; i++)
    {
        vector.push_back(i);
        list.push_back(i + 21);
        deque.push_back(i + 42);
    }

    std::cout << "Testing vector :" << std::endl;
    try
    {
        std::cout << *easyfind(vector, 42) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }

    std::cout << std::endl << "Testing list :" << std::endl;
    try
    {
        std::cout << *easyfind(list, 21) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }

    std::cout << std::endl << "Testing deque :" << std::endl;
    try
    {
        std::cout << *easyfind(deque, 42) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    return (0);
}