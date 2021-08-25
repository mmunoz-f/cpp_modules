/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/25 23:58:12 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "Phone_book.class.hpp"

Phone_book::Phone_book(const unsigned int cap) : cap(cap) {

	return ;
}

Phone_book::~Phone_book(void){

	return ;
}

void	Phone_book::exec_command(std::string) const {

	std::string	command;

	std::getline(std::cin, command);

	if (command.compare("ADD") == 0)
		Phone_book::add_command();

	else if (command.compare("SEARCH") == 0)
		Phone_book::search_command();

	else if (command.compare("EXIT") == 0)
		Phone_book::exit_command();
}
