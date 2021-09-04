/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:58:54 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 17:03:39 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap") {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attacktDamage = 20;

	std::cout << this->_name << " has been promoted" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attacktDamage = 20;

	std::cout << this->_name << " has been promoted" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st.getName()) {

	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();

	std::cout << this->_name << " has been promoted" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {

	std::cout << this->_name << " was slain" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &st) {

	this->_name = st.getName();
	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(const std::string &target) const {

	std::cout << this->_name << " hit with a stick " << target << ", causing " << this->_attacktDamage << " points of damage" << std::endl;
}

void	ScavTrap::guardGate(void) const {

	std::cout << this->_name << " entered in Gate keeper mode" << std::endl;
}
