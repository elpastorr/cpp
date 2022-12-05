#include "Fixed.hpp"

Fixed::Fixed( void )
{
    this->val = 0;
}

Fixed::Fixed( Fixed const &src )
{
    *this = src;
}

Fixed::Fixed( const int val)
{
    this->val = val << this->mantis;
}

Fixed::Fixed( const float val )
{
    this->val = roundf(val * (1 << this->mantis));
}

Fixed::~Fixed( void )
{
}

Fixed   &Fixed::operator=(Fixed const &overload)
{
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

bool    Fixed::operator<( const Fixed &nb ) const
{
    return (this->getRawBits() < nb.getRawBits());
}

bool    Fixed::operator>( const Fixed &nb ) const
{
    return (this->getRawBits() > nb.getRawBits());
}
bool    Fixed::operator>=( const Fixed &nb ) const
{
    return (this->getRawBits() >= nb.getRawBits());
}

bool    Fixed::operator<=( const Fixed &nb ) const
{
    return (this->getRawBits() <= nb.getRawBits());
}

bool    Fixed::operator==( const Fixed &nb ) const
{
    return (this->getRawBits() == nb.getRawBits());
}

bool    Fixed::operator!=( const Fixed &nb ) const
{
    return (this->getRawBits() != nb.getRawBits());
}

Fixed   Fixed::operator+( const Fixed &nb ) const
{
    Fixed   result;

    result.setRawBits(this->val + nb.getRawBits());
    return result;
}

Fixed   Fixed::operator-( const Fixed &nb ) const
{
    Fixed   result;

    result.setRawBits(this->val - nb.getRawBits());
    return result;
}

Fixed   Fixed::operator*( const Fixed &nb ) const
{
    Fixed   result;

    result.setRawBits((this->val * nb.getRawBits()) >> this->mantis);
    return result;
}

Fixed   Fixed::operator/( const Fixed &nb ) const
{
    Fixed   result;

    result.setRawBits((this->val << this->mantis) / nb.getRawBits());
    return result;
}

Fixed   &Fixed::operator++( void )
{
    this->val++;
    return (*this);
}

Fixed   &Fixed::operator--( void )
{
    this->val--;
    return *this;
}

Fixed   Fixed::operator++( int )
{
    Fixed tmp = *this;
    operator++();
    return tmp;
}

Fixed   Fixed::operator--( int )
{
    Fixed tmp = *this;
    operator--();
    return tmp;
}

Fixed   &Fixed::min(Fixed &n1, Fixed &n2)
{
    return (n1 < n2 ? n1 : n2);
}

Fixed   &Fixed::max(Fixed &n1, Fixed &n2)
{
    return (n1 > n2 ? n1 : n2);
}

const Fixed   &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    return (n1 < n2 ? n1 : n2);
}

const Fixed   &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    return (n1 > n2 ? n1 : n2);
}
