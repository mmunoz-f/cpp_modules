/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:15:36 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 21:59:10 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

bool	validStr(const std::string str, const char *set) {

	size_t	i = 0;
	size_t	strLenth = str.length();

	while (i < strLenth) {
		if (!strchr(set, str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	strJustOne(const std::string str, char c) {

}

bool	strIsInt(std::string str) {

	if (!validStr(str, "1234567890-"))
		return (false);
	if ()
	return (true);
}

bool	strIsFloat(std::string str) {

	size_t	fpos;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (!validStr(str, "1234567890-.f"))
		return (false);
	if (!strJustOne(str, 'f'))
		return (false);
	if (!strJustOne(str, '.'))
		return (false);
	return (true);
}

Conversion::Conversion(void) : exceptions() {

	return ;
}

Conversion::Conversion(const std::string &original) {

	int	i = 0;

	if (original.length() < 2) {
		this->c = original[0];
		this->charConv();
	}
	else if (strisint(original)) {
		this->i = std::stoi(original);
		this->intConv();
	}
	else if (strisfloat(original)) {
		this->f = std::stof(original);
		this->floatConv();
	}
	else if (strisdouble(original)) {
		this->d = std::stod(original);
		this->floatConv();
	}
	else
		std::cout << "Not a literal value" << std::endl;
}

Conversion::Conversion(const Conversion &src) : c(src.c), i(src.i), f(src.f), d(src.d) {

	for (int i = 0; i < 4; i++) {
		this->exceptions[i] = src.exceptions[i];
	}
	return ;
}

Conversion::~Conversion(void) {

	return ;
}

Conversion	&Conversion::operator=(const Conversion &src) {

	for (int i = 0; i < 4; i++) {
		this->exceptions[i] = src.exceptions[i];
	}
	this->c = src.c;
	this->i = src.i;
	this->f = src.f;
	this->d = src.d;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Conversion &src) {

	o << "char: ";
	if (src.exceptions[0].empty())
		o << src.c << std::endl;
	else
		o << src.exceptions[0] << std::endl;
	o << "int: ";
	if (src.exceptions[1].empty())
		o << src.i << std::endl;
	else
		o << src.exceptions[1] << std::endl;
	o << "float: ";
	if (src.exceptions[2].empty())
		o << src.f << std::endl;
	else
		o << src.exceptions[2] << std::endl;
	o << "double: ";
	if (src.exceptions[3].empty())
		o << src.d << std::endl;
	else
		o << src.exceptions[3] << std::endl;
	return (o);
}
