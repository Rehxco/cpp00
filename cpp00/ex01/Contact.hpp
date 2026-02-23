/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:39:27 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/23 14:35:21 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Contact
{
  public:
	std::string get_first_name(void)
	{
		return (this->first_name);
	};
	std::string get_last_name(void)
	{
		return (this->last_name);
	};
	std::string get_nickname(void)
	{
		return (this->nickname);
	};
	std::string get_phone_number(void)
	{
		return (this->phone_number);
	};
	std::string get_darkest_secret(void)
	{
		return (this->darkest_secret);
	};

	void set_first_name(std::string str) {
        first_name = str;
    };
	void set_last_name(std::string str) {
        last_name = str;
    };
	void set_nickname(std::string str) {
        nickname = str;
    };
	void set_phone_number(std::string str) {
        phone_number = str;
    };
	void set_darkest_secret(std::string str) {
        darkest_secret = str;
    };

  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};