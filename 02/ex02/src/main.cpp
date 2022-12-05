#include "Fixed.hpp"

int main( void )
{
    // Fixed a;
    // Fixed b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );
    // a = Fixed( 1234.4321f );
    // std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
    // std::cout << "a < b : " << (a < b) << std::endl;
    // std::cout << "a > b : " << (a > b) << std::endl;
    // std::cout << "b >= d : " << (b >= d) << std::endl;
    // std::cout << "a <= c : " << (a <= c) << std::endl;
    // std::cout << "b == d : " << (b == d) << std::endl;
    // std::cout << "b != d : " << (b != d) << std::endl << std::endl;
    // a = Fixed( 10.10f );
    // b = Fixed( 5 );
    // std::cout << "a = " << a << ", b = " << b << std::endl;
    // std::cout << "a + b = " << a + b << std::endl;
    // std::cout << "a - b = " << a - b << std::endl;
    // std::cout << "a * b = " << a * b << std::endl;
    // std::cout << "a / b = " << a / b << std::endl << std::endl;
    
    // a = Fixed( 0 );
    // std::cout << "a = " << a << std::endl;
    // std::cout << "++a = " << ++a << std::endl;
    // std::cout << "a++ = " << a++ << std::endl;
    // std::cout << "a = " << a << std::endl << std::endl;
    // a = Fixed( 0 );
    // std::cout << "a = " << a << std::endl;
    // std::cout << "--a = " << --a << std::endl;
    // std::cout << "a-- = " << a-- << std::endl;
    // std::cout << "a = " << a << std::endl;

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}