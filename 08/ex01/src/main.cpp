#include "Span.hpp"

int main(void)
{
    std::cout << "Basic tests :" << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(2);
        std::cout << "Shortest Span = " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span = " << sp.longestSpan() << std::endl << std::endl;        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }

    std::cout << "Test with bigger Span :" << std::endl;

    try
    {
        Span sp2 = Span(100001);
        sp2.addNumber(-50000, 50001, 5);

        std::cout << "Shortest Span = " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span = " << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    return (0);
}
