/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:21:47 by snino             #+#    #+#             */
/*   Updated: 2022/12/03 15:21:47 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"

class Contact 
{
	private:

			std::string	first_name;
			std::string	last_name;
			std::string	nick;
			std::string	phone_numb;
			std::string	dark_secret;
	public:
		
			Contact();
			Contact(std::string	first_name,
					std::string	last_name,
					std::string	nick,
					std::string	phone_numb,
					std::string	dark_secret);
			std::string	getFirstName() const;
			std::string	getLastName() const;
			std::string	getNick() const;
			std::string	getNumb() const;
			std::string	getSecret() const;
			void	setFirstName(std::string str);
			void	setLastName(std::string str);
			void	setNick(std::string str);
			void	setNumb(std::string str);
			void	setSecret(std::string str);
			void	setInfo();
			bool	getEmpty();
			~Contact();
};

#endif
