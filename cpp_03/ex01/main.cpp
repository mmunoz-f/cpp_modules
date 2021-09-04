/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:13:25 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 16:59:20 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap	jerry("jerry");
	ScavTrap	tom("tom");


	tom.attack(jerry.getName());
	jerry.takeDamage(tom.getAttackDamage());
	jerry.beRepaired(10);

	jerry.guardGate();

	return (0);
}
