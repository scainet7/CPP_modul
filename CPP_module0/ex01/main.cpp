/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:22:18 by snino             #+#    #+#             */
/*   Updated: 2022/12/03 15:22:18 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main ()
{
	std::string	com;
	PhoneBook	PhoneBook;

	while (true)
	{
		if (!std::getline(std::cin, com))
			return (1);
		else if (com == "EXIT")
			return (0);
		else if (com == "ADD")
			PhoneBook.addContact();
		else if (com == "SEARCH")
		{

		}
		else
			std::cout << "ERROR: Invalid command.\n" << "Please enter the command correctly.\n";
	}
	return (0);
}