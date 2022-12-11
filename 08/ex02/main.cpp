#include "MutantStack.hpp"
#include <vector>
#include <list>

void    test_subject(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "First element = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size = " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void    test_vector(void)
{
    std::vector<int> mstack;
    mstack.push_back(5);
    mstack.front() = 17;
    std::cout << "First element = " << mstack.front() << std::endl;
    mstack.front() = 5;
    std::cout << "Size = " << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::vector<int>::iterator it = mstack.begin();
    std::vector<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

void    test_list(void)
{
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.front() = 17;
    std::cout << "First element = " << mstack.front() << std::endl;
    mstack.front() = 5;
    std::cout << "Size = " << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

int main(void)
{
    std::cout << "Subect Tests :" << std::endl;
    test_subject();
    std::cout << std::endl << "Same Tests on vector :" << std::endl;
    test_vector();
    std::cout << std::endl << "Same Tests on list :" << std::endl;
    test_list();
    return (0);
}
