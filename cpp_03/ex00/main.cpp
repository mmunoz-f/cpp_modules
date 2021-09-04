/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:13:25 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 15:45:58 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	jerry("jerry");
	ClapTrap	tom("tom");


	tom.attack("jerry");
	jerry.takeDamage(tom.getAttackDamage());
	jerry.beRepaired(10);
	return (0);
}
