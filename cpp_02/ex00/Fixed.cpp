/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:25:47 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/02 14:08:52 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) : _n(n) {

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

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(const int raw) {

	this->_n = raw;
}

const int	Fixed::_pointBit = 8;
