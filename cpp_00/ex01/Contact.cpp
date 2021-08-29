/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:08:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/29 17:27:35 by mmunoz-f         ###   ########.fr       */
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

void	Contact::get_contact_data(void) const {

	std::cout << "First name:" << std::endl;
	std::cout << this->first_name;
	std::cout << std::endl << std::endl;

	std::cout << "Last name:" << std::endl;
	std::cout << this->last_name;
	std::cout << std::endl << std::endl;

	std::cout << "Nickname:" << std::endl;
	std::cout << this->nickname;
	std::cout << std::endl << std::endl;

	std::cout << "Number:" << std::endl;
	std::cout << this->number;
	std::cout << std::endl << std::endl;

	std::cout << "Darkest secret:" << std::endl;
	std::cout << this->darkest_secret;
	std::cout << std::endl << std::endl;
}

int	Contact::set_contact_data(void) {

	char	aux[1024];

	std::cout << "New contact's first name:" << std::endl;
	std::cin >> this->first_name;
	if (this->first_name.empty())
		return (1);

	std::cout << "New contact's last name:" << std::endl;
	std::cin >> this->last_name;
	if (this->last_name.empty())
		return (1);

	std::cout << "New contact's nickname:" << std::endl;
	std::cin >> this->nickname;
	if (this->nickname.empty())
		return (1);

	std::cout << "New contact's number:" << std::endl;
	std::cin >> aux;
	this->number = atoi(aux);
	if (this->number < M_MIN_PHONE_NUMBER || this->number > M_MAX_PHONE_NUMBER)
		return (1);

	std::cout << "New contact's darkest secret:" << std::endl;
	std::cin >> this->darkest_secret;
	if (this->darkest_secret.empty())
		return (1);

	this->_n = ++this->_total;
	return (0);
}
