/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookApp.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:10:36 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/30 03:30:33 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookApp.hpp"
#include <sstream>
#include <iostream>

void PhoneBookApp::run ()
{
	bool		is_exit;
	std::string input;

	is_exit = false;
	while (!is_exit)
	{
		std::cout << PROMPT;
		input = get_input();
		is_exit = handle_input(input);
	}
}

std::string PhoneBookApp::get_input()
{
	std::string input;
	std::getline(std::cin, input);
	return (input);
}

bool PhoneBookApp::handle_input(std::string input)
{
	std::string	input_index;
	int			phonebook_index;
	std::stringstream ss;
	int			converted_index;
	
	input = StringHelper::trim_space(input);
	if (input == EXIT)
		return (true);
	else if (input == ADD)
		phonebook.add_contact_to_phonebook();
	else if (input == SEARCH)
	{
		if (!(phonebook_index = phonebook.get_arry_index()))
		{
			show_input_err_message(NO_CONTACT_ERR);
			return (false);
		}
		phonebook.list_contact();
		std::cout << INDEX_INPUT_COMMENT;
		input_index = get_input();
		if (!is_valid_index(input_index, phonebook_index))
		{
			show_input_err_message(INDEX_INPUT_ERR);
			return (false);
		}
		ss.str(input_index);
		ss >> converted_index;
		phonebook.search_contact(converted_index);
	}
	else
		show_input_err_message(INPUT_ERR);
	return (false);
}

void PhoneBookApp::show_input_err_message(std::string err)
{
	std::cout << err << std::endl; 
}

bool PhoneBookApp::is_valid_index(std::string input, int index)
{
	std::stringstream ss;
	int		input_num;
	
	for (std::string::size_type i = 0; i < input.size(); ++i) {
        if (!std::isdigit(static_cast<unsigned char>(input[i]))) {
            return false;
        }
    }
	ss.str(input);
	ss >> input_num;
	if (input.size() < 2 && input_num < index)
		return true;
	return false;
}
