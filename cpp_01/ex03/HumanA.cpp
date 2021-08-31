/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:55:48 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 20:33:20 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon) : _name("default_HumanA"), _weapon(weapon) {

	return ;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
