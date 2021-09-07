/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:53:32 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/07 11:27:50 by miguel           ###   ########.fr       */
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

const std::string	&Weapon::getType(void) const {

	return (this->_type);
}

void	Weapon::setType(std::string type) {

	this->_type = type;
}
