#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << GRE "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				 " I really do!\n\n" END;
}

void Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << BLU "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!"
				 " If you did, I wouldn’t be asking for more!\n\n" END;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << YEL "I think I deserve to have some extra bacon for free."
				" I’ve been coming for years whereas you started working here since last month.\n\n" END;
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << RED "This is unacceptable! I want to speak to the manager now.\n\n" END;
}

void Harl::complain(std::string level)
{
	int i;
	void (Harl::*fptr[])(void) = {
									&Harl::debug,
									&Harl::info,
									&Harl::warning,
									&Harl::error
									};
	
	i = Harl::getIn(level);
	switch (i)
	{
		case (0):
		{
			(this->*fptr[0])();
		}
		case (1):
		{
			(this->*fptr[1])();
		}
		case (2):
		{
			(this->*fptr[2])();
		}
		case (3):
		{
			(this->*fptr[3])();
			break;
		}
		default:
			std::cout << MAG "[ Probably complaining about insignificant problems ]\n" END;
	}
}

int	Harl::getIn(std::string level)
{
	bool act[] = {level =="DEBUG", level == "INFO", level =="WARNING", level =="ERROR"};
	int i;

	i = 0;
	while (act[i] == 0)
		i++;
	return (i);
}