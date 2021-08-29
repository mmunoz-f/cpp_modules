/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/29 17:23:54 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phone_book.hpp"
#include "Contact.hpp"

Phone_book::Phone_book(void) : _cap(M_PHONE_BOOK_CAP) {

	this->start_phone_book();
	return ;
}

Phone_book::~Phone_book(void) {

	return ;
}

void	Phone_book::search_command(void) const {

	unsigned int	i;

	std::cout << std::setw(10) << std::setfill('.'); // not sure if this will work
	std::cout << "index" << "|" << "first name" << "|" << "last name" << "|" << "nickname" << std::endl;

	i = 0;
	while (i < M_PHONE_BOOK_CAP) {

		if (this->_contacts[i].get_n() > 0)
			std::cout << i + 1 << this->_contacts[i].first_name << this->_contacts[i].last_name << this->_contacts[i].nickname << std::endl;
		i++;
	}

	std::cout << "Contacts index:" << std::endl;
	std::cin >> i;

	this->_contacts[i].get_contact_data();
}

void	Phone_book::add_command(void) {

	unsigned int	i;
	unsigned int	aux;
	unsigned int	n;
	unsigned int	oldest;

	i = 0;
	n = 0;
	oldest = 0;
	while (i < M_PHONE_BOOK_CAP) {

		aux = this->_contacts[i].get_n();
		if (aux < n) {

			n = aux;
			oldest = i;
		}
		i++;
	}

	if (this->_contacts[oldest].set_contact_data())
		std::cout << "Error, contact not saved" << std::endl;
}

void	Phone_book::start_phone_book(void) {

	std::string	command;

	std::cout << "Welcome to you own phone book:" << std::endl;

	while (1) {

		std::cout << "Enter a command" << std::endl;

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
