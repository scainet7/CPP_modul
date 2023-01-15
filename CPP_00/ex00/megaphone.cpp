/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:02:30 by snino             #+#    #+#             */
/*   Updated: 2022/11/01 19:02:30 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	++argv;
	while (*argv)
	{
		std::string str = *argv;
		i = 0;
		while (str[i])
		{
			std::cout << (char)toupper(str[i]);
			i++;
		}
		argv++;
	}
	std::cout << std::endl;
	return (0);
}

