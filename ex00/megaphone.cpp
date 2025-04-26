/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 05:43:37 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/27 05:45:55 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

char	*toupper_char(char *str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(static_cast<unsigned int>(str[i]));
	return (str);
}

int	main(int argc, char* argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{	
		for (int i = 1; i < argc; i++)
			std::cout << toupper_char(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
