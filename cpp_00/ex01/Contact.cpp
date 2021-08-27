/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:08:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/27 00:53:35 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void) : _n(_total) {

	_total++;

	return ;
}

Contact::~Contact(void) {

	_total--;

	return ;
}

unsigned int	Contact::get_n(void) const {

	return (this->_n);
}

unsigned int	Contact::get_total(void) const {

	return (this->_total);
}

unsigned int	Contact::_total = 0;
