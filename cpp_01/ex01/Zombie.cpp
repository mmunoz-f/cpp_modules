/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:33:20 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/07 10:36:44 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("zombie") {


	std::cout << this->_name << " raised in search of delicious brains." << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << this->_name << " raised in search of delicious brains." << std::endl;
	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " had an existencial crisis and slowly walk away" << std::endl;
	return ;
}

void	Zombie::set_name(std::string name) {

	this->_name = name;
}

void	Zombie::announce(void) const {

	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
