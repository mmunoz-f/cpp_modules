/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:15:36 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 17:14:29 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

const char	*Conversion::NotLiteralException::what() const throw () {

	return ("Not a literal value");
}

Conversion::Conversion(void) : exceptions() {

	return ;
}

Conversion::Conversion(const std::string &str) {

	if (str.length() == 1)
		this->charConv(str);
	else if (strIsInt(str))
		this->intConv(str);
	else if (strIsFloat(str))
		this->floatConv(str);
	else if (strIsDouble(str))
		this->doubleConv(str);
	else
		throw NotLiteralException();
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

void	Conversion::charConv(const std::string &str) {

	this->c = str[0];
	this->i = static_cast<int>(this->c);
	this->f = static_cast<float>(this->i);
	this->d = static_cast<double>(this->i);
}

void	Conversion::intConv(const std::string &str) {

		this->i = std::stoi(str);
		this->f = static_cast<float>(this->i);
		this->d = static_cast<double>(this->i);
		this->c = static_cast<char>(this->i);

	if (this->c < 32 || this->c > 126)
		this->exceptions[0] = "Non displayable";
}

bool	Conversion::handleException(const std::string &str) {

	const std::string exceptions[] = {"-inf", "+inf", "nan"};
	int i;

	for (i = 0; i < 3; i++) {
		if (str.find(exceptions[i]) != std::string::npos)
			break ;
	}

	switch (i) {
		case 0:
			this->exceptions[0] = "impossible";
			this->exceptions[1] = "impossible";
			this->exceptions[2] = "-inff";
			this->exceptions[3] = "-inf";
			break ;
		case 1:
			this->exceptions[0] = "impossible";
			this->exceptions[1] = "impossible";
			this->exceptions[2] = "+inff";
			this->exceptions[3] = "+inf";
			break ;
		case 2:
			this->exceptions[0] = "impossible";
			this->exceptions[1] = "impossible";
			this->exceptions[2] = "nanf";
			this->exceptions[3] = "nan";
			break ;
		default:
			return (false);
	}
	return (true);
}

void	Conversion::floatConv(const std::string &str) {

	if (this->handleException(str))
		return ;

		this->f = std::stof(str);
		this->d = static_cast<double>(this->f);
		this->i = static_cast<int>(this->f);
		this->c = static_cast<char>(this->f);

	if (this->c < 32 || this->c > 126)
		this->exceptions[0] = "Non displayable";
}

void	Conversion::doubleConv(const std::string &str) {

	if (this->handleException(str))
		return ;

		this->d = std::stod(str);
		this->f = static_cast<float>(this->d);
		this->i = static_cast<int>(this->d);
		this->c = static_cast<char>(this->d);

	if (this->c < 32 || this->c > 126)
		this->exceptions[0] = "Non displayable";
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
