/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:25:47 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/03 12:34:39 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {

	return ;
}

Fixed::Fixed(const int n) {

	this->_n = n << this->_pointBit;
	return ;
}

Fixed::Fixed(const float f) {

	this->_n = roundf(f * (1 << this->_pointBit));
	return ;
}

Fixed::Fixed(const Fixed &fixed) {

	this->_n = fixed.getRawBits();
	return ;
}

Fixed::~Fixed(void) {

	return ;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {

	this->_n = fixed.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &fixed) const {

	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed) const {

	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed) const {

	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const {

	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++() {

	this->_n++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	tmp(*this);

	this->_n++;
	return (tmp);
}

Fixed	&Fixed::operator--() {

	this->_n--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	tmp(*this);

	this->_n--;
	return (tmp);
}

bool	Fixed::operator<(const Fixed &fixed) const {

	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator<=(const Fixed &fixed) const {

	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator>(const Fixed &fixed) const {

	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator>=(const Fixed &fixed) const {

	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator==(const Fixed &fixed) const {

	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(const Fixed &fixed) const {

	return (this->toFloat() != fixed.toFloat());
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2) {

	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {

	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2) {

	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {

	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

float	Fixed::toFloat(void) const {

	return ((double)this->_n / (double)(1 << this->_pointBit));
}

int	Fixed::toInt(void) const {

	return (this->_n >> this->_pointBit);
}

int	Fixed::getRawBits(void) const {

	return (this->_n);
}

void	Fixed::setRawBits(const int raw) {

	this->_n = raw;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed) {

	o << fixed.toFloat();
	return (o);
}

const int	Fixed::_pointBit = 8;
