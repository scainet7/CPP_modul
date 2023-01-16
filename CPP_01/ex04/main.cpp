#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "ERROR: YOU ENTERED THE WRONG NUMBER OF ARGUMENTS\n";
	else
	{
		Replace replace(argv[1], argv[2], argv[3]);
		replace.replace();
	}
	return (0);
}