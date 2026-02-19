/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:11:50 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/19 18:15:09 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "PhoneBook.hpp"


int	main(int ac, char **av)
{
	PhoneBook phone;
	Contacts contact;
	std::string command;
	std::string buffer;
	while (1)
	{
		std::cout << "ADD, SEARCH OR END ?" << std::endl;
		std::cin >> command;
		if (command == "ADD" || command == "SEARCH" || command == "END")
		{
			if (command == "ADD")
			{
				phone.contact_creation(contact);
				
			}
			else if (command == "SEARCH")
			{
				std::cout << "Index * First Name * Last Name  * Nickname  " << std::endl;
				std::cout << "      *            *            *           " << std::endl;
				std::cout << "Index *            *            *           " << std::endl;
				std::cout << contact.get_first_name() << std::endl;
			}
			else if (command == "END")
				return (0);
		}
	}
	return(0);
}