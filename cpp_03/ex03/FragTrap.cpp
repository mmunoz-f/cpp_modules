/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:18:23 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 17:24:56 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap") {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attacktDamage = 30;

	std::cout << this->_name << " got unleashed" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attacktDamage = 30;

	std::cout << this->_name << " got unleashed" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &st) : ClapTrap(st.getName()) {

	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();

	std::cout << this->_name << " got unleashed" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {

	std::cout << this->_name << " fell asleep" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &st) {

	this->_name = st.getName();
	this->_hitPoints = st.getHitPoints();
	this->_energyPoints = st.getEnergyPoints();
	this->_attacktDamage = st.getAttackDamage();
	return (*this);
}

void	FragTrap::attack(const std::string &target) const {

	std::cout << this->_name << " tackled " << target << ", causing " << this->_attacktDamage << " points of damage" << std::endl;
}

void	FragTrap::highFiveGuys(void) const {

	std::cout << "<" << this->_name << "> " << "Well done, high five!..." << std::endl;
}
