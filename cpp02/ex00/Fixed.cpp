#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& prev_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    value = prev_fixed.getRawBits();
}

Fixed &Fixed::operator =(Fixed const &to_copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = to_copy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called"  << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"  << std::endl;
    return (value);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called"  << std::endl;
    value = raw;
}