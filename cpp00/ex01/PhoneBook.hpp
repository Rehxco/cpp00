/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:22:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/24 12:46:11 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>

class PhoneBook
{
  private:
	Contact tab[8];
	int index;
	int contact_total;

	std::string no_more_ten(std::string str)
	{
		int len = str.length();
		if (len > 10)
		{
			str = str.substr(0, 9) + '.';
			return (str);
		}
		return (str);
	}

  public:
	PhoneBook()
	{
		index = 0;
		contact_total = index;
	}
	void add_contact()
	{
		std::string buffer;
		std::cout << "First Name: ";
		std::cin >> buffer;
		if (std::cin.eof())
			exit(0);
		tab[index].set_first_name(buffer);
		std::cout << "Last Name: ";
		std::cin >> buffer;
		if (std::cin.eof())
			exit(0);
		tab[index].set_last_name(buffer);
		std::cout << "Nickname: ";
		std::cin >> buffer;
		if (std::cin.eof())
			exit(0);
		tab[index].set_nickname(buffer);
		std::cout << "Phone Number: ";
		std::cin >> buffer;
		if (std::cin.eof())
			exit(0);
		tab[index].set_phone_number(buffer);
		std::cout << "Darkest Secret: ";
		std::cin >> buffer;
		if (std::cin.eof())
			exit(0);
		tab[index].set_darkest_secret(buffer);
		index++;
		if (contact_total < 8)
		{
			contact_total++;
		}
		if (index > 7)
			index = 0;
	}
	void print_phonebook()
	{
		int i = 0;
		std::cout << "| " << std::setw(5) << "Index"
					<< " | " << std::setw(10) << "First Name"
					<< " | " << std::setw(10) << "Last Name"
					<< " | " << std::setw(10) << "Nickname"
					<< " |" << std::endl;
		while (i != contact_total)
		{
			std::cout << "| " << std::setw(5) << i << " | " << std::setw(10) << no_more_ten(tab[i].get_first_name()) << " | " << std::setw(10) << no_more_ten(tab[i].get_last_name()) << " | " << std::setw(10) << no_more_ten(tab[i].get_nickname()) << " |" << std::endl;
			i++;
		}
	}
	void search_index(std::string command)
	{
		int len;
		int tmp;

		if (contact_total == 0)
		{
			std::cout << "No contact information recorded" << std::endl;
			return ;
		}

		while (true)
		{
			std::cout << "Enter an index between 0 and 7" << std::endl;
			std::cin >> command;
			if (std::cin.eof())
				exit(0);
			if (((len = command.length()) == 1) && (command[0] >= '0'
					&& command[0] <= '7'))
			{
				tmp = atoi(command.c_str());
				if (tmp < contact_total)
					break ;
			}
			std::cout << "Invalid index, try again" << std::endl;
		}
		std::cout << "**********************" << std::endl;
		std::cout << "Index: " << tmp << std::endl;
		std::cout << "First Name: " << tab[tmp].get_first_name() << std::endl;
		std::cout << "Last Name: " << tab[tmp].get_last_name() << std::endl;
		std::cout << "Nickname: " << tab[tmp].get_nickname() << std::endl;
		std::cout << "Phone Number: " << tab[tmp].get_phone_number() << std::endl;
		std::cout << "Darkest Secret: " << tab[tmp].get_darkest_secret() << std::endl;
		std::cout << "**********************" << std::endl;
	}
};