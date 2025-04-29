/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:34:38 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/29 22:40:34 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	arry_index = 0;
}

void PhoneBook::add_contact_to_phonebook()
{
	int i;
	
	i = arry_index % 8;
	arry[i].create_contact(i);
	arry_index += 1;
}

void PhoneBook::list_contact()
{
	show_list_contact_header();
	for (int i = 0; i < arry_index && i < 8; i++)
	{
		arry[i].show_overview();
		std::cout << std::endl;
	}
}
void PhoneBook::show_list_contact_header()
{
	std::cout 
	<< "|" << StringHelper::format_str("Index")
	<< "|" << StringHelper::format_str("First Name")
	<< "|" << StringHelper::format_str("Last Name")
	<< "|" << StringHelper::format_str("Nickname") 
	<< "|" << std::endl;
}

int PhoneBook::get_arry_index()
{
	return arry_index;
}
void PhoneBook::search_contact(int index)
{
	arry[index].show_contact();
}
