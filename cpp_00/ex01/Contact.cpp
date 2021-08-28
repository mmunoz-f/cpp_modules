/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:08:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/28 18:18:02 by miguel           ###   ########.fr       */
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


int	Contact::set_contact_data(void){

	char			*aux;

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
}
