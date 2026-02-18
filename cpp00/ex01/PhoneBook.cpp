/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:11:50 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/18 17:32:12 by sbrochar         ###   ########.fr       */
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
				std::cout << "First Name: ";
				std::cin >> buffer;
				contact.set_first_name(buffer);
				std::cout << "Last Name: ";
				std::cin >> buffer;
				contact.set_last_name(buffer);
				std::cout << "Nickname: ";
				std::cin >> buffer;
				contact.set_nickname(buffer);
				std::cout << "Phone Number: ";
				std::cin >> buffer;
				contact.set_phone_number(buffer);
				std::cout << "Darkest Secret: ";
				std::cin >> buffer;
				contact.set_darkest_secret(buffer);
			}
			else if (command == "SEARCH")
			{
				std::cout << "Index * First Name * Last Name  * Nickname  " << std::endl;
				std::cout << "      *            *            *           " << std::endl;
				std::cout << "Index *            *            *           " << std::endl;
				std::cout << "      *   *            *           " << std::endl;
			}
			else if (command == "END")
				return (0);
		}
	}
	return(0);
}