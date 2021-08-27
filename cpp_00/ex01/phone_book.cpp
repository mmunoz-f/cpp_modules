/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/27 00:47:04 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phone_book.hpp"
#include "Contact.hpp"

Phone_book::Phone_book(void) : _cap(M_PHONE_BOOK_CAP) {

	return ;
}

Phone_book::~Phone_book(void) {

	return ;
}

void	Phone_book::add_command(void) {

	unsigned int	i;
	unsigned int	total;

	total = this->_contacts[0].get_total();

	i = 0;
	while (i < total && this->_contacts[i].first_name.empty())
		i++;

	std::cout << "New contact's first name:" << std::endl;
	std::getline(std::cin, this->_contacts[i].first_name);

	std::cout << "New contact's last name:" << std::endl;
	std::getline(std::cin, this->_contacts[i].last_name);

	std::cout << "New contact's nickname:" << std::endl;
	std::cin >> this->_contacts[i].nickname;

	std::cout << "New contact's number:" << std::endl;
	std::getline(std::cin, this->_contacts[i].first_name);

	std::cout << "New contact's darkest secret:" << std::endl;
	std::getline(std::cin, this->_contacts[i].darkest_secret);
}

void	Phone_book::start_phone_book(void) {

	std::string	command;

	while (1) {

		std::cin >> command;

		if (command == "ADD")
			this->add_command();

		else if (command == "SEARCH")
			this->search_command();

		else if (command == "EXIT")
			return ;

		else
			std::cout << "Not a valid command. Try again" << std::endl;
	}
}
