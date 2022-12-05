#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int val;
        const int static mantis = 8;

    public:
        Fixed();
        Fixed( Fixed const &src );
        ~Fixed();
        Fixed &operator=(Fixed const &overload);
        int getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif