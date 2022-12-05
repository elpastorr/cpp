#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
    private:
        int val;
        const int static mantis = 8;

    public:
        Fixed();
        Fixed( Fixed const &src );
        Fixed( const int val);
        Fixed( const float val );
        ~Fixed();
        int getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(Fixed const &overload);

        bool    operator<( const Fixed &nb ) const;
        bool    operator>( const Fixed &nb ) const;
        bool    operator>=( const Fixed &nb ) const;
        bool    operator<=( const Fixed &nb ) const;
        bool    operator==( const Fixed &nb ) const;
        bool    operator!=( const Fixed &nb ) const;

        Fixed   operator+( const Fixed &nb ) const;
        Fixed   operator-( const Fixed &nb ) const;
        Fixed   operator*( const Fixed &nb ) const;
        Fixed   operator/( const Fixed &nb ) const;

        Fixed   &operator++( void );
        Fixed   &operator--( void );
        Fixed   operator++( int );
        Fixed   operator--( int );

        static Fixed   &min(Fixed &n1, Fixed &n2);
        static Fixed   &max(Fixed &n1, Fixed &n2);
        static const Fixed   &min(const Fixed &n1, const Fixed &n2);
        static const Fixed   &max(const Fixed &n1, const Fixed &n2);

};

std::ostream & operator<<(std::ostream &output, Fixed const &data);

#endif
