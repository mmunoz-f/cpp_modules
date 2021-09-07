/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:13:25 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 12:55:33 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int	main(void) {

	ClapTrap	jerry("jerry");
	ScavTrap	tom("tom");
	FragTrap	spike("spike");
	DiamondTrap topsy("topsy");


	tom.attack(jerry.getName());
	jerry.takeDamage(tom.getAttackDamage());
	spike.attack(tom.getName());
	tom.takeDamage(spike.getAttackDamage());
	jerry.beRepaired(10);

	tom.guardGate();
	spike.highFiveGuys();

	std::cout << "Topsy:\nhitpoints: " << topsy.getHitPoints() << "\nenergypoints: " << topsy.getEnergyPoints() << "\nattackdamage: " << topsy.getAttackDamage() << std::endl;
	topsy.attack(spike.getName());
	spike.takeDamage(topsy.getAttackDamage());
	topsy.guardGate();
	topsy.highFiveGuys();
	topsy.whoAmI();

	return (0);
}
