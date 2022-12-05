#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->val = 0;
}

Fixed::Fixed( Fixed const &src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &overload)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &overload)
        this->val = overload.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->val;
}

void    Fixed::setRawBits( int const raw )
{
    this->val = raw;
}
