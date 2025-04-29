/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookApp.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:51:49 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/29 22:41:27 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKAPP_H
#define PHONEBOOKAPP_H
#include "PhoneBook.hpp"
#include <iostream>
#define EXIT "EXIT"
#define ADD "ADD"
#define SEARCH "SEARCH"
#define INPUT_ERR "Please type ADD or SEARCH or EXIT. Other command is not accepted"
#define INDEX_INPUT_ERR "Please type valid index"
#define NO_CONTACT_ERR "Please create contact first"
#define PROMPT "Please type ADD or SEARCH or EXIT :"
#define INDEX_INPUT_COMMENT "Please type index of contact to see detail: "

class PhoneBookApp {
	public:
		void 		run();
	private:
		PhoneBook phonebook;
		std::string get_input();
		bool 		handle_input(std::string str);
		void 		show_input_err_message(std::string err);
		bool 		is_valid_index(std::string input, int index);
};

#endif