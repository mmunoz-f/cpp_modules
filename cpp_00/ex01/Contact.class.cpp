/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:08:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/26 20:08:57 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, int number, std::string darkest_secret)
	: first_name(first_name), last_name(last_name), nickname(nickname), number(number), darkest_secret(darkest_secret) {
	return ;
}

Contact::~Contact(void) {

	return ;
}
