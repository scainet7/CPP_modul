#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>

class Replace
{
	private:
		std::string file_name;
		std::string str1;
		std::string str2;

	public:
		Replace(std::string file_name, std::string str1, std::string str2);
		~Replace();
		void replace();

};

#endif