#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"

class Replace
{
	private:
		std::string file_name;
		std::string str1;
		std::string str2;

	public:
		Replace(std::string file_name, std::string str1, std::string str2);
		~Replace();
		void check_str(std::string &str);
		void replace();
};

#endif
