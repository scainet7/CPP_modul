#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->value = 0;
}

Fixed::Fixed (const int number)
{
	this->value = number << this->bits;
}

Fixed::Fixed (const float number)
{
	this->value = roundf(number * (pow(2, this->bits)));
}

Fixed::Fixed (const Fixed &object)
{
	this->value = object.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &object)
{
	this->value = object.getRawBits();
	return *this;
}

Fixed Fixed::operator + (const Fixed &object)
{
	return Fixed (this->value + object.value);
}

Fixed Fixed::operator - (const Fixed &object)
{
	return Fixed (this->value - object.value);
}

Fixed Fixed::operator * (const Fixed &object)
{
	return Fixed (this->toFloat() * object.toFloat());
}

Fixed Fixed::operator / (const Fixed &object)
{
	return Fixed (this->toFloat() * object.toFloat());
}

Fixed &Fixed::operator ++ ()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	this->value++;
	return (temp);
}

Fixed &Fixed::operator -- ()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);
	this->value--;
	return (temp);
}

bool Fixed::operator == (const Fixed &object)
{
	return (this->value == object.value);
}

bool Fixed::operator != (const Fixed &object)
{
	return (this->value != object.value);
}

bool Fixed::operator >= (const Fixed &object) const
{
	return (this->value >= object.value);
}

bool Fixed::operator <= (const Fixed &object) const
{
	return (this->value <= object.value);
}

bool Fixed::operator > (const Fixed &object) const
{
	return (this->value > object.value);
}

bool Fixed::operator < (const Fixed &object) const
{
	return (this->value < object.value);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
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

const Fixed &Fixed::min(Fixed const &num1, Fixed const &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

const Fixed &Fixed::max(Fixed const &num1, Fixed const &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
		if (num1 > num2)
		return (num1);
	else
		return (num2);
}

std::ostream &operator << (std::ostream &out, const Fixed  &fix)
{
	out << fix.toFloat();
	return (out);
}