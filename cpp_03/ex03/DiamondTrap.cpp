/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:56:34 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 12:59:16 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() {

	this->_name = "DiamondTrap";
	this->ClapTrap::_name = this->_name + ClapTrap::_name;

	std::cout << this->_name << " has evolved" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {

	this->_name = name;
	this->ClapTrap::_name = this->_name + ClapTrap::_name;

	std::cout << this->_name << " has evolved" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &st) : ScavTrap(), FragTrap() {

	this->_name = st.getName();
	this->ClapTrap::_name = this->_name + st.ClapTrap::_name;
	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();

	std::cout << this->_name << " has evolved" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << this->_name << " was destroyed" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &st) {

	this->_name = st.getName();
	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();
	return (*this);
}

void	DiamondTrap::whoAmI(void) const {

	std::cout << "My name is " << this->_name << ", my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
