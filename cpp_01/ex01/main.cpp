/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:32:33 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/07 10:38:39 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	*juanes;

	juanes = zombieHorde(20, "juan");

	for (int i = 0; i < 20; i++)
		juanes[i].announce();

	delete [] juanes;
	return (0);
}
