/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:21:10 by snino             #+#    #+#             */
/*   Updated: 2022/12/03 15:21:10 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() //Конструктор по умолчанию
{
}

Contact::Contact(std::string first_name, // Конструктор копирования
				 std::string last_name,
				 std::string nick,
				 std::string phone_numb,
				 std::string dark_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick = nick;
	this->phone_numb = phone_numb;
	this->dark_secret = dark_secret;
}

Contact::~Contact() // Деструктор
{
}

void  Contact::print()
{
	std::cout << getFirstName() << std::endl;
	std::cout << getLastName() << std::endl;
	std::cout << getNick() << std::endl;
	std::cout << getNumb() << std::endl;
	std::cout << getSecret() << std::endl;
}

void Contact::setFirstName(std::string str)
{
	this->first_name = str;	
}

void Contact::setLastName(std::string str)
{
	this->last_name = str;
}
void Contact::setNick(std::string str)
{
	this->nick = str;
}
void Contact::setNumb(std::string str)
{
	this->phone_numb = str;
}
void Contact::setSecret(std::string str)
{
	this->dark_secret = str;
}

std::string Contact::getFirstName() const
{
	return (this->first_name);
}

std::string	Contact::getLastName() const
{
	return (this->last_name);
}
std::string	Contact::getNick() const
{
	return (this->nick);
}
std::string	Contact::getNumb() const
{
	return (this->phone_numb);
}
std::string	Contact::getSecret() const
{
	return (this->dark_secret);
}

void Contact::setInfo()
{
	std::string str;

	std::cout << BLU "Enter first Name:\n" END;
	std::getline(std::cin, str);
	this->setFirstName(str);

	std::cout << BLU "Enter last Name:\n" END;
	std::getline(std::cin, str);
	this->setLastName(str);

	std::cout << BLU "Enter nick Name:\n" END;
	std::getline(std::cin, str);
	this->setNick(str);

	std::cout << BLU "Enter telephone number:\n" END;
	std::getline(std::cin, str);
	this->setNumb(str);

	std::cout << BLU "Enter darkest secret:\n" END;
	std::getline(std::cin, str);
	this->setSecret(str);
}

bool Contact::getEmpty()
{
	if (this->getFirstName().empty())
		return (true);
	if (this->getLastName().empty())
		return (true);
	if (this->getNick().empty())
		return (true);
	if (this->getNumb().empty())
		return (true);
	if (this->getSecret().empty())
		return (true);
	return (false);
}
