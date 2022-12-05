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

Fixed::Fixed( const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->val = val << this->mantis;
}

Fixed::Fixed( const float val )
{
    std::cout << "Float constructor called" << std::endl;
    this->val = roundf(val * (1 << this->mantis));
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

std::ostream & operator<<(std::ostream& os, Fixed const &data)
{
    os << data.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const
{
    return this->val;
}

void    Fixed::setRawBits( int const raw )
{
    this->val = raw;
}

float   Fixed::toFloat( void ) const
{
    return((float)(this->val) / (1 << this->mantis));
}

int Fixed::toInt( void ) const
{
    return((int)(this->val >> this->mantis));
}
