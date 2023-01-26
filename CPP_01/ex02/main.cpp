#include <iostream>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"

int main()
{
	std::string string;

	string = RED "HI THIS IS BRAIN" END;
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << BLU "string address:		" END << &string << std::endl;
	std::cout << BLU "stringPTR address:	" END << stringPTR << std::endl;
	std::cout << BLU "stringREF address:	" END << &stringREF << std::endl;
	std::cout << GRE "value string:		" END << string << std::endl;
	std::cout << GRE "value stringPTR:	" END << *stringPTR << std::endl;
	std::cout << GRE "value stringREF:	" END << stringREF << std::endl;
	return (0);
}
