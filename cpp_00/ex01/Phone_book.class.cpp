/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:09:14 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/26 11:27:57 by miguel           ###   ########.fr       */
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

void	Phone_book::exec_command(std::string command){

	if (command.compare("ADD") == 0)
		Phone_book::add_command();

	else if (command.compare("SEARCH") == 0)
		Phone_book::search_command();

	else if (command.compare("EXIT") == 0)
		Phone_book::exit_command();
}
