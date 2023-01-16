#include "Replace.hpp"

Replace::Replace(std::string file_name, std::string str1, std::string str2)
{
	this->file_name = file_name;
	this->str1 = str1;
	this->str2 = str2;
}

Replace::~Replace()
{

}

