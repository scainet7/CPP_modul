#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed (const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	this->value = object.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &object)
{
	std::cout <<"Copy assignment operator called" << std::endl;
	this->value = object.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
