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
};

std::ostream & operator<<(std::ostream &output, Fixed const &data);

#endif
