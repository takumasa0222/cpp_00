/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:03:08 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/30 03:30:21 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <sstream> 

void Contact::show_overview()
{
	std::stringstream ss;
	ss << index;
	std::cout 
	<< "|" << StringHelper::format_str(ss.str())
	<< "|" << StringHelper::format_str(first_name)
	<< "|" << StringHelper::format_str(last_name)
	<< "|" << StringHelper::format_str(nick_name) << "|";
}

void Contact::show_contact()
{
	std::stringstream ss;
	ss << index;
	std::cout 
	<< "Index: " << ss.str() << std::endl
	<< "First Name: " << first_name << std::endl
	<< "Last Name: " << last_name << std::endl
	<< "Nickname: " << nick_name << std::endl
	<< "Phone number: " << phone_num << std::endl
	<< "Darkest Secret: " << dark_secret << std::endl;
}

void Contact::create_contact(int index)
{
	bool is_valid;
	int i;
	std::string input;

	i = 0;

	is_valid = false;
	while (i < FIELD_COUNT)
	{
		input = handle_input_for_contact(static_cast<ContactField>(i), &is_valid);
		if (is_valid)
		{
			set_field_value(static_cast<ContactField>(i), input);
			i++;
		}
	}
	this->index = index;
}

std::string Contact::handle_input_for_contact(ContactField type, bool *is_valid)
{
	std::string input;
	
	*is_valid = false;
    switch (type)
	{
		case FIRST_NAME:
			std::cout << "First Name: ";
			break;
		case LAST_NAME:
			std::cout << "Last Name: ";
			break;
		case NICKNAME:
			std::cout << "Nickname: ";
			break;
		case PHONE_NUMBER:
			std::cout << "Phone number: ";
			break;
		case DARKEST_SECRET:
			std::cout << "Darkest Secret: ";
			break;
		default:
			return "";
	}
	std::getline(std::cin, input);
	input = StringHelper::trim_space(input);
	if (!input.empty() && type != PHONE_NUMBER) {
		*is_valid = true;
		return input;
	} else if (!input.empty() && type == PHONE_NUMBER)
	{
		if (!is_valid_phone_num(input))
		{
			std::cout << INVALID_PHONE_NUM << std::endl;
			return "";
		}
		*is_valid = true;
		return input;
	}
	else {
		std::cout << INPUT_CONTACT_ERR << std::endl;
		return "";
	}
}

void Contact::set_field_value(ContactField type, std::string input)
{
	switch (type)
	{
		case FIRST_NAME:
			first_name = input;
			break;
		case LAST_NAME:
			last_name = input;
			break;
		case NICKNAME:
			nick_name = input;
			break;
		case PHONE_NUMBER:
			phone_num = input;
			break;
		case DARKEST_SECRET:
			dark_secret = input;
			break;
		default:
			return ;
	}
}

bool	Contact::is_valid_phone_num(std::string &input)
{
	if (MAX_PHONE_LEN < input.length())
	for (std::string::size_type i = 0; i < input.length(); i++)
	{
		if (i == 0 && (static_cast<unsigned int>(input[i])) == '+')
			continue;
		if (!std::isdigit(static_cast<unsigned int>(input[i])))
			return (false);
	}
	return (true);
}