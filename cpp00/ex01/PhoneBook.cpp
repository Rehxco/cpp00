/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:11:50 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/24 12:43:56 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	PhoneBook phone;
	Contact contact;
	std::string command;
	std::string buffer;
	int i = 0;
	while (1)
	{
		std::cout << "ADD, SEARCH OR END ?" << std::endl;
		std::cin >> command;
		if (std::cin.eof())
			exit(0);
		if (command == "ADD" || command == "SEARCH" || command == "END")
		{
			if (command == "ADD")
			{
				phone.add_contact();
			}
			else if (command == "SEARCH")
			{
				phone.print_phonebook();
				phone.search_index(command);
			}
			else if (command == "END")
				return (0);
		}
	}
	return (0);
}