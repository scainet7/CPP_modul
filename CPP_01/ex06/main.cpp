
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
	{
		harl.complain(argv[1]);
	}
	else
	{
		std::cout << RED "ERROR: YOU ENTERED THE WRONG NUMBER OF ARGUMENTS\n" END;
		return (1);
	}
	return(0);
}