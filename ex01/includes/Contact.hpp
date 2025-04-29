/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:34:54 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/29 23:07:21 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include "StringHelper.hpp"

#define INPUT_CONTACT_ERR "Input cannot be empty"
#define INVALID_PHONE_NUM "Phone numbers can only contain digits and the '+' sign. Please try again."
#define MAX_PHONE_LEN 15
enum ContactField {
    FIRST_NAME,
    LAST_NAME,
    NICKNAME,
    PHONE_NUMBER,
    DARKEST_SECRET,
    FIELD_COUNT,
	INDEX
};

class Contact {
	public:
		void show_contact();
		void show_overview();
		void create_contact(int index);
		
	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_num;
		std::string dark_secret;
		std::string handle_input_for_contact(ContactField type, bool *is_valid);
		void		set_field_value(ContactField type, std::string input);
		bool		is_valid_phone_num(std::string &input);
};

#endif