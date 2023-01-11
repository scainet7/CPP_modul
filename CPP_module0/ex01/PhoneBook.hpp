/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <snino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:21:51 by snino             #+#    #+#             */
/*   Updated: 2022/12/03 15:21:51 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
			Contact contact[8];
			int		numb;
	public:

			PhoneBook();
			void	addContact();
			void	searchContact();
			void	fullprintContacts();
			void	printContact();
			~PhoneBook();
};

#endif
