#include "Replace.hpp"

Replace::Replace(std::string filename, std::string str1, std::string str2)
{
	this->file_name = filename;
	this->str1 = str1;
	this->str2 = str2;
}

Replace::~Replace()
{
}

void Replace::check_str(std::string &str) {
	int i;

	i = str.find(str1); 
	while(i != -1)
	{
		str.erase(i, str1.length()); 
		str.insert(i, str2); 
		i = str.find(str1); 
	}
}

void Replace::replace()
{
	std::string   str;
	std::string   res_file;
	std::ifstream input_file;
	std::ofstream output_file;
	
	if(this->file_name.length() == 0)
	{ 
		std::cout << RED "ERROR: BAD FILE NAME\n" END;
		exit(EXIT_FAILURE);
	}
	if(this->str1.length() == 0)
	{ 
		std::cout << RED "ERROR: EMPTY STRING 1\n" END;
		exit(EXIT_FAILURE);
	}
	if(this->str2.length() == 0)
	{ 
		std::cout << RED "ERROR: EMPTY STRING 2\n" END;
		exit(EXIT_FAILURE);
	}
	input_file.open(this->file_name); 
	if (!input_file.is_open())
	{
		std::cout << RED "ERROR: OPEN INPUT FILE\n" END;
		exit(EXIT_FAILURE);
	}
	input_file.seekg(0, std::ios::end); 
	if (input_file.tellg() == 0) 
	{
		std::cout << RED "ERROR: EMPTY FILE\n" END;
		exit(EXIT_FAILURE);
	}
	input_file.seekg(0, std::ios::beg);
	res_file = "res.replace"; 
	output_file.open(res_file); 
	if (!output_file.is_open()) 
	{
		std::cout << RED "ERROR: OTPUT FILE IS NOT CREATED\n" END;
		input_file.close(); 
		exit(EXIT_FAILURE);
	}
	while (std::getline(input_file, str))
	{
		check_str(str);
		output_file << str << "\n";
	}
	input_file.close(); 
	output_file.close();
}
