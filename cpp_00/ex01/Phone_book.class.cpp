/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/26 20:26:40 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phone_book.class.hpp"
#include "Contact.class.hpp"

Phone_book::Phone_book(const unsigned int cap) : _cap(cap) {

	return ;
}

Phone_book::~Phone_book(void) {

	return ;
}

void	Phone_book::start_phone_book(void) {

	std::string	command;

	while (1) {

		std::getline(std::cin, command);

		if (command.compare("ADD") == 0)
			Phone_book::add_command();

		else if (command.compare("SEARCH") == 0)
			Phone_book::search_command();

		else if (command.compare("EXIT"))
			return ;

		else
			std::cout << "Not a valid command. Try again" << std::endl;
	}

}
