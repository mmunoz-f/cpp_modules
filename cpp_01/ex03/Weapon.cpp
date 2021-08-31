/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:53:32 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 20:04:09 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void) {

	return ;
}

Weapon::Weapon(std::string type) : _type(type) {

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string	Weapon::getType(void) const {

	return (this->_type);
}

void	Weapon::setType(std::string type) {

	this->_type = type;
}
