#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << GRE "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				 " I really do!\n" END;
}

void Harl::info()
{
	std::cout << BLU "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!"
				 " If you did, I wouldn’t be asking for more!\n" END;
}

void Harl::warning()
{
	std::cout << YEL "I think I deserve to have some extra bacon for free."
				" I’ve been coming for years whereas you started working here since last month.\n" END;
}

void Harl::error()
{
	std::cout << RED "This is unacceptable! I want to speak to the manager now.\n" END;
}

void Harl::complain(std::string level)
{
	bool param[] = {level =="DEBUG", level == "INFO", level =="WARNING",
				  level =="ERROR"};
	void (Harl::*function_pointer[])(void) = {
									&Harl::debug,
									&Harl::info,
									&Harl::warning,
									&Harl::error
									};
	int i = 0;
	while (param[i] == 0)
		i++;
	if (i < 4)
		(this->*function_pointer[i])();
}