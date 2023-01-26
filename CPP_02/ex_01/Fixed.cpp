#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed (const int number)
{
	std::cout << "Int constructor called\n";
	this->value = number << this->bits;
}

Fixed::Fixed (const float number)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(number * (pow(2, this->bits)));
}

Fixed::Fixed (const Fixed &object)
{
	std::cout << "Copy constructor called\n";
	this->value = object.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &object)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

int Fixed::toInt() const
{
	return (this->value >> this->bits);
}

float Fixed::toFloat() const
{
	return ((double)this->value / (double)(1 << this->bits));
}

std::ostream &operator << (std::ostream &out, const Fixed  &fix)
{
	out << fix.toFloat();
	return (out);
}
