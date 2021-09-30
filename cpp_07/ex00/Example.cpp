/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:29:07 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/30 17:25:34 by mmunoz-f         ###   ########.fr       */
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

	if (this == &src)
		return (*this);
	this->n = src.n;
	return (*this);
}

bool	Example::operator<(const Example &a) const {

	return (this->n < a.n ? true : false);
}

bool	Example::operator>(const Example &a) const {

	return (this->n > a.n ? true : false);
}

std::ostream	&operator<<(std::ostream &o, const Example &src) {

	o << src.n;
	return (o);
}
