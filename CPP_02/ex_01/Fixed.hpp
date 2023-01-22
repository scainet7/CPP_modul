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
		~Fixed ();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &fix);

#endif
