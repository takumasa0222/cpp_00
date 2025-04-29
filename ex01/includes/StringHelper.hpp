/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringHelper.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:32:51 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/04/29 22:33:08 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGHELPER_HPP
#define STRINGHELPER_HPP

#include <string>

class StringHelper
{
public:
    static std::string format_str(const std::string& str);
    static std::string trim_space(const std::string& str);

private:
    StringHelper();
};

#endif
