/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:08:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/30 21:44:56 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void) : _n(_total) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

unsigned int	Contact::get_n(void) const {

	return (this->_n);
}

unsigned int	Contact::get_total(void) const {

	return (this->_total);
}

unsigned int	Contact::_total = 0;

std::string	Contact::get_first_name(void) const {

	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const {

	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const {

	return (this->_nickname);
}

std::string	Contact::get_number(void) const {

	return (this->_number);
}

std::string	Contact::get_darkest_secret(void) const {

	return (this->_darkest_secret);
}

void	Contact::get_contact_data(void) const {

	std::cout << "First name:" << std::endl;
	std::cout << this->_first_name;
	std::cout << std::endl << std::endl;

	std::cout << "Last name:" << std::endl;
	std::cout << this->_last_name;
	std::cout << std::endl << std::endl;

	std::cout << "Nickname:" << std::endl;
	std::cout << this->_nickname;
	std::cout << std::endl << std::endl;

	std::cout << "Number:" << std::endl;
	std::cout << this->_number;
	std::cout << std::endl << std::endl;

	std::cout << "Darkest secret:" << std::endl;
	std::cout << this->_darkest_secret;
	std::cout << std::endl << std::endl;
}

int	Contact::set_contact_data(void) {

	std::cout << "New contact's first name:" << std::endl;
	std::getline(std::cin, this->_first_name);
	if (this->_first_name.empty())
		return (1);

	std::cout << "New contact's last name:" << std::endl;
	std::getline(std::cin, this->_last_name);
	if (this->_last_name.empty())
		return (1);

	std::cout << "New contact's nickname:" << std::endl;
	std::getline(std::cin, this->_nickname);
	if (this->_nickname.empty())
		return (1);

	std::cout << "New contact's number:" << std::endl;
	std::getline(std::cin, this->_number);
	if (this->_number.empty())
		return (1);

	std::cout << "New contact's darkest secret:" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
	if (this->_darkest_secret.empty())
		return (1);

	_total++;
	this->_n = _total;
	return (0);
}
