#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int bits = 8;

	public:
		Fixed ();
		Fixed (const int number);
		Fixed (const float number);
		Fixed (const Fixed &object);
		Fixed &operator = (const Fixed &object);
		Fixed operator + (const Fixed &object);
		Fixed operator - (const Fixed &object);
		Fixed operator * (const Fixed &object);
		Fixed operator / (const Fixed &object);
		Fixed &operator ++ ();
		Fixed operator ++ (int);
		Fixed &operator -- ();
		Fixed operator -- (int);
		bool operator == (const Fixed &object);
		bool operator != (const Fixed &object);
		bool operator >= (const Fixed &object) const;
		bool operator <= (const Fixed &object) const;
		bool operator > (const Fixed &object) const;
		bool operator < (const Fixed &object) const;
		~Fixed ();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static const Fixed &min(Fixed const &num1, Fixed const &num2);
		static const Fixed &max(Fixed const &num1, Fixed const &num2);
		static Fixed &min(Fixed &num1, Fixed &num2);
		static Fixed &max(Fixed &num1, Fixed &num2);
};

std::ostream &operator << (std::ostream &out, const Fixed &fix);

#endif
