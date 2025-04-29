/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:34:36 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/29 22:37:36 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "StringHelper.hpp"

class PhoneBook {
	public:
		void 		add_contact_to_phonebook();
		void 		list_contact();
		void		search_contact(int index);
		int			get_arry_index();
		PhoneBook();
	private:
		Contact arry[8];
		int		arry_index;
		void 	show_list_contact_header();
};

#endif
