/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:22:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/19 18:54:26 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contacts.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
  public:
	PhoneBook()
	{
		index = 0;
	}
	void add_contact()
	{
		std::string buffer;

		std::cout << "First Name: ";
		std::cin >> buffer;
		tab[index].set_first_name(buffer);
		std::cout << "Last Name: ";
		std::cin >> buffer;
		tab[index].set_last_name(buffer);
		std::cout << "Nickname: ";
		std::cin >> buffer;
		tab[index].set_nickname(buffer);
		std::cout << "Phone Number: ";
		std::cin >> buffer;
		tab[index].set_phone_number(buffer);
		std::cout << "Darkest Secret: ";
		std::cin >> buffer;
		tab[index].set_darkest_secret(buffer);
		index++;
		if (index > 7)
			index = 0;
	}

  private:
	Contacts tab[8];
	int index;
};