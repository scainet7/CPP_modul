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

void PhoneBook::addContact(void)
{
	if (this->numb == 8 || this->numb == 0)
	{
		this->contact[0].setInfo();
		if (this->contact[0].getEmpty())
		{
			std::cout << "An empty string is not allowed\n";
			this->contact[0] = Contact();
			this->numb--;
		}
	}
	else
	{
		this->contact[this->numb].setInfo();
		if (this->contact[this->numb].getEmpty())
		{
			std::cout << "An empty string is not allowed\n";
			this->contact[this->numb] = Contact();
			this->numb--;
		}
	}
	
	this->numb++;
}

PhoneBook::~PhoneBook()
{
}