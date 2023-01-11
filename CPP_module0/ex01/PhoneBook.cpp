/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:21:17 by snino             #+#    #+#             */
/*   Updated: 2022/12/03 15:21:17 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->numb = 0;
}

void PhoneBook::addContact()
{
	Contact temp;

	temp.setInfo();
	if (temp.getEmpty())
		std::cout << RED "An empty string is not allowed\n" END;
	else
	{
		if (this->numb == 8 || this->numb == 0)
			{
				this->contact[0] = temp;
				this->numb = 0;
			}
		else
			this->contact[this->numb] = temp;
		std::cout << GRE "Yours contact has been added\n\n" END;
		this->numb++;
	}
}

void PhoneBook::fullprintContacts()
{
	std::cout << "|**************************************|\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "|**************************************|\n";
	for (int i = 0; i < this->numb; i++)
	{
		std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		if (this->contact[i].getFirstName().length() > 10)
		{
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getFirstName() << "|";
		}
		if (this->contact[i].getLastName().length() > 10)
		{
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getLastName() << "|";
		}
		if (this->contact[i].getNick().length() > 10)
		{
			std::cout << this->contact[i].getNick().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contact[i].getNick() << "|";
		}
		std::cout << "\n";
	}
	std::cout << "|**************************************|\n\n";
}

void PhoneBook::searchContact()
{
	if (this->numb == 0)
	{
		std::cout << YEL"Phine book is empty!\n\n" END;
		return;
	}
	fullprintContacts();
	printContact();
}

void PhoneBook::printContact()
{
	int index;
	std::string str;

	std::cout << GRE "Enter index contact:\n" END;
	getline(std::cin,str);
	index = atoi(str.c_str());
	if (index <= 0 || index > this->numb)
	{
		std::cout << YEL "Contact not found\n\n" END;
		return ;
	}
	std::cout << "|" << "FirstName:		|" << std::setw(10) << contact[index - 1].getFirstName() << "|\n";
	std::cout << "|" << "LastName:		|" << std::setw(10) << contact[index - 1].getFirstName() << "|\n";
	std::cout << "|" << "NicktName:		|" << std::setw(10) << contact[index - 1].getFirstName() << "|\n";
	std::cout << "|" << "Phone Number:		|" << std::setw(10) << contact[index - 1].getFirstName() << "|\n";
	std::cout << "|" << "Darkest Secret:	|" << std::setw(10) << contact[index - 1].getSecret() << "|\n\n";
}

PhoneBook::~PhoneBook()
{
}