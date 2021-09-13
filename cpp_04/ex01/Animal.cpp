/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:41:54 by miguel            #+#    #+#             */
/*   Updated: 2021/09/13 12:10:56 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << "An animal woke up" << std::endl;
	return  ;
}

Animal::Animal(std::string type) : _type(type) {

	std::cout << type << " woke up" << std::endl;
	return ;
}

Animal::Animal(const Animal &animal) {

	if (this->_type.empty())
		std::cout << this->_type << " woke up" << std::endl;
	else
		std::cout << "An animal woke up" << std::endl;
	this->_type = animal.getType();
	return ;
}

Animal::~Animal(void) {

	if (this->_type.empty())
		std::cout << "An animal";
	else
		std::cout << this->_type;
	std::cout << " went to sleep" << std::endl;
	return;
}

Animal	&Animal::operator=(const Animal &animal) {

	this->_type = animal.getType();
	return (*this);
}

const std::string	Animal::getType(void) const {

	return (this->_type);
}

Brain	*Animal::getBrain(void) const {

	return (NULL);
}

void	Animal::makeSound(void) const {

}
