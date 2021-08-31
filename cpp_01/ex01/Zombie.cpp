/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:33:20 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 17:11:29 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("zombie") {

	return ;
}

Zombie::Zombie(std::string name) : _name(name) {

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
