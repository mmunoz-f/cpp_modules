/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/30 21:54:27 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ios>
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "Phone_book.hpp"
#include "Contact.hpp"

Phone_book::Phone_book(void) : _cap(M_PHONE_BOOK_CAP) {

	this->start_phone_book();
	return ;
}

Phone_book::~Phone_book(void) {

	return ;
}

void	display_index(void) {

	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << "index" << "|";
	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << "first name" << "|";
	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << "last name" << "|";
	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << "nickname" << "|" << std::endl;
}

void	display_contact(unsigned int n, const Contact contact) {

	std::string	aux;

	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << n << "|";

	aux = contact.get_first_name();
	if (aux.size() > 10)
		aux.replace(9, 2, ".", 0, 1);
	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << aux.substr(0, 10) << "|";

	aux = contact.get_last_name();
	if (aux.size() > 10)
		aux.replace(9, 2, ".", 0, 1);
	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << aux.substr(0, 10) << "|";

	aux = contact.get_nickname();
	if (aux.size() > 10)
		aux.replace(9, 2, ".", 0, 1);
	std::cout << std::setiosflags(std::ios::left) << std::setw(10) << aux.substr(0, 10) << "|" << std::endl;
}

void	Phone_book::search_command(void) const {

	unsigned int	i;

	display_index();

	i = 0;
	while (i < M_PHONE_BOOK_CAP) {

		if (this->_contacts[i].get_n() > 0)
			display_contact(i + 1, this->_contacts[i]);
		i++;
	}

	std::cout << std::endl << "Contacts index:" << std::endl;
	std::cin >> i;
	if (std::cin.fail())
		std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << std::endl;

	if (i > M_PHONE_BOOK_CAP || i < 1 || !this->_contacts[i - 1].get_n()) {

		std::cout << "Not an existing contact" << std::endl;
		return ;
	}
	this->_contacts[i - 1].get_contact_data();
}

void	Phone_book::add_command(void) {

	unsigned int	i;
	unsigned int	aux;
	unsigned int	n;
	unsigned int	oldest;

	i = 0;
	n = this->_contacts[0].get_total();
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

	while (!std::cin.eof()) {

		std::cout << std::endl << "Enter a command" << std::endl;
		std::getline(std::cin, command);

		if (command == "ADD")
			this->add_command();

		else if (command == "SEARCH")
			this->search_command();

		else if (command == "EXIT")
			return ;
	}
}
