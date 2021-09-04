/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:13:58 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 17:04:41 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attacktDamage(0) {

	std::cout << this->_name << " was summomed" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attacktDamage(0) {

	std::cout << this->_name << " was summomed" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &cp) {

	std::cout << this->_name << " was summomed" << std::endl;
	this->_name = cp.getName();
	this->_hitPoints = cp.getHitPoints();
	this->_energyPoints = cp.getEnergyPoints();
	this->_attacktDamage = cp.getAttackDamage();
	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << this->_name << " run away" <<std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cp) {

	this->_name = cp.getName();
	this->_hitPoints = cp.getHitPoints();
	this->_energyPoints = cp.getEnergyPoints();
	this->_attacktDamage = cp.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName(void) const {

	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const {

	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {

	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const {

	return (this->_attacktDamage);
}

void	ClapTrap::setName(std::string name) {

	this->_name = name;
}

void	ClapTrap::setHitPoints(int hitPoints) {

	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints) {

	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage) {

	this->_attacktDamage = attackDamage;
}

void	ClapTrap::attack(const std::string &target) const {

	std::cout << this->_name << " attack " << target << ", causing " << this->_attacktDamage << " points of damage" <<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << this->_name << " took " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	std::cout << this->_name << " was repaired and recovered " << amount <<" health points" << std::endl;
	this->_hitPoints += amount;
}
