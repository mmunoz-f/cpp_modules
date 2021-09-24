/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:29:07 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/24 06:22:37 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Example.hpp"

Example::Example(void) {

	return ;
}

Example::Example(const int n) : n(n) {

	return ;
}

Example::Example(const Example &src) {

	*this = src;
	return ;
}

Example::~Example(void) {

	return ;
}

Example	&Example::operator=(const Example &src) {

	this->n = src.n;
	return (*this);
}

bool	Example::operator<(const Example &a) const {

	return (this->n < a.n ? true : false);
}

bool	Example::operator>(const Example &a) const {

	return (this->n > a.n ? true : false);
}

Example	Example::operator++(int) {

	Example	tmp(*this);

	this->n++;
	return (tmp);
}

std::ostream	&operator<<(std::ostream &o, const Example &src) {

	o << src.n;
	return (o);
}
