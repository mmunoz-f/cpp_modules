/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:13:25 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 11:21:42 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	ClapTrap	jerry("jerry");
	ScavTrap	tom("tom");
	FragTrap	spike("spike");


	jerry.attack(tom.getName());
	tom.attack(jerry.getName());
	jerry.takeDamage(tom.getAttackDamage());
	spike.attack(tom.getName());
	tom.takeDamage(spike.getAttackDamage());
	jerry.beRepaired(10);

	tom.guardGate();
	spike.highFiveGuys();

	return (0);
}
