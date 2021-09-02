/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:25:47 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/02 17:55:17 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) {

	std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_pointBit;
	return ;
}

Fixed::Fixed(const float f) {

	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (1 << this->_pointBit));
	return ;
}

Fixed::Fixed(const Fixed &fixed) {

	std::cout << "Copy constructor called" << std::endl;
	this->_n = fixed.getRawBits();
	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" <<std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {

	std::cout << "Assignation operator called" << std::endl;
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

float	Fixed::toFloat(void) const {

	return ((double)this->_n / (double)(1 << this->_pointBit));
}

int	Fixed::toInt(void) const {

	return (this->_n >> this->_pointBit);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
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
