/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:13:25 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 11:20:51 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void) {

	ClapTrap	jerry("jerry");
	ScavTrap	tom("tom");


	jerry.attack(tom.getName());
	tom.attack(jerry.getName());
	jerry.takeDamage(tom.getAttackDamage());
	jerry.beRepaired(10);

	tom.guardGate();

	return (0);
}
