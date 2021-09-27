/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:36:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/27 16:29:44 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Span.hpp"

Span::Span(void) : _size(0), _values() {

	return ;
}

Span::Span(const unsigned int N) : _size(N), _values() {

	return ;
}

Span::Span(const Span &src) : _size(src.getSize()) {

	*this = src;
	return ;
}

Span::~Span(void) {

	return ;
}

Span	&Span::operator=(const Span &src) {

	this->_values = src.getVector();
	return (*this);
}

const int	&Span::operator[](const unsigned int n) const {

	return (this->_values[n]);
}


const char *Span::AlreadyFilledException::what () const throw () {

	return ("span is full");
}

const char *Span::CouldNotFindSpan::what () const throw () {

	return ("not enough numbers to find a span");
}

int	Span::getSize(void) const {

	return (this->_size);
}

const std::vector<int>	&Span::getVector(void) const {

	return(this->_values);
}

void	Span::addNumber(const int n) {

	if (this->_values.size() >= this->_size)
		throw AlreadyFilledException();
	this->_values.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if (this->_size < this->_values.size() + std::distance(begin, end))
		throw AlreadyFilledException();
	std::copy(begin, end, std::back_inserter(this->_values));
}

int	Span::min(void) const {

	return (*(std::min_element(this->_values.begin(), this->_values.end())));
}

int	Span::max(void) const {

	return (*(std::max_element(this->_values.begin(), this->_values.end())));
}

int	Span::longestSpan(void) const {

		if (this->_values.size() < 2)
			throw CouldNotFindSpan();
		return (this->max() - this->min());
}

int Span::shortestSpan(void) const {

	if (this->_values.size() < 2)
			throw CouldNotFindSpan();

	int	tmp;
	int	span = this->longestSpan();
	std::vector<int>::const_iterator	it = this->_values.begin();
	std::vector<int>::const_iterator	it2 = this->_values.begin();

	for (; it != this->_values.end(); it++) {
		for (; it2 < this->_values.end(); it2++) {
			if (*it != *it2 && (*it < *it2 ? (tmp = *it2 - *it) : (tmp = *it - *it2)) < span)
				span = tmp;
		}
	}
	return (span);
}
