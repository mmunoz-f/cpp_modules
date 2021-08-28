/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/28 18:18:08 by miguel           ###   ########.fr       */
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

void	Phone_book::search_command(void) const {

	unsigned int	i;

	i = 0;
	while (i < M_PHONE_BOOK_CAP) {

		if ()
	}
}

void	Phone_book::add_command(void) {

	unsigned int	i;
	unsigned int	aux;
	unsigned int	n;
	unsigned int	oldest;

	i = 0;
	n = 0;
	while (i < M_PHONE_BOOK_CAP) {

		aux = this->_contacts[i].get_n();
		if (aux < n) {

			n = aux;
			oldest = i;
		}
		i++;
	}

	this->_contacts[oldest].set_contact_data();
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
