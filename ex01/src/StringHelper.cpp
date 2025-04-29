/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringHelper.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:33:20 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/29 22:35:43 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringHelper.hpp"

std::string StringHelper::format_str(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return std::string(10 - str.length(), ' ') + str;
}

std::string StringHelper::trim_space(const std::string& str)
{
	std::string::size_type start = 0;
	while (start < str.length() && std::isspace(static_cast<unsigned char>(str[start])))
		++start;
	std::string::size_type end = str.length();
	while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
		--end;
	return str.substr(start, end - start);	
}
