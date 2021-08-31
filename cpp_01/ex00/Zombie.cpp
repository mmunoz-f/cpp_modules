/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:33:20 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 16:33:36 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("zombie") {

	this->announce();
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {

	this->announce();
	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " had an existencial crisis and slowly walk away" << std::endl;
	return ;
}

void	Zombie::announce(void) const {

	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
