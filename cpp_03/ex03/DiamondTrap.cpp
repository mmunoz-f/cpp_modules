/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:56:34 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 17:59:47 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondTrap") {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attacktDamage = 20;

	std::cout << this->_name << " has been promoted" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attacktDamage = 20;

	std::cout << this->_name << " has been promoted" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &st) : ClapTrap(st.getName()) {

	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();

	std::cout << this->_name << " has been promoted" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << this->_name << " was slain" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &st) {

	this->_name = st.getName();
	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(const std::string &target) const {

	std::cout << this->_name << " hit with a stick " << target << ", causing " << this->_attacktDamage << " points of damage" << std::endl;
}

void	DiamondTrap::guardGate(void) const {

	std::cout << this->_name << " entered in Gate keeper mode" << std::endl;
}
