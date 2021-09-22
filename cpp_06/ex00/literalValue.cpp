/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literalValue.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:59:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 17:11:38 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

static bool	validStr(const std::string &str, const char *set) {

	size_t	i = 0;
	size_t	strLenth = str.length();

	while (i < strLenth) {
		if (!strchr(set, str[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	strJustOne(const std::string &str, char c) {

	size_t	pos;

	if ((pos = str.find(c)) == std::string::npos)
		return (false);
	if (str.find(c, pos) != std::string::npos)
		return (false);
	return (true);
}

bool	strIsInt(const std::string &str) {

	size_t	npos;

	if (!validStr(str, "1234567890-"))
		return (false);
	if ((npos = str.find('-')) != std::string::npos) {
		if (str[0] != '-' || strJustOne(str, '-'))
			return (false);
	}
	return (true);
}

bool	strIsFloat(const std::string &str) {

	size_t	npos;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (!validStr(str, "1234567890-.f"))
		return (false);
	if (strJustOne(str, 'f') || str.find('f') != str.length() - 1)
		return (false);
	if (strJustOne(str, '.'))
		return (false);
	if ((npos = str.find('-')) != std::string::npos) {
		if (str[0] != '-' || strJustOne(str, '-'))
			return (false);
	}
	return (true);
}

bool	strIsDouble(const std::string &str) {

	size_t	npos;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (!validStr(str, "1234567890-."))
		return (false);
	if (strJustOne(str, '.'))
		return (false);
	if ((npos = str.find('-')) != std::string::npos) {
		if (str[0] != '-' || strJustOne(str, '-'))
			return (false);
	}
	return (true);
}
