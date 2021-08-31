/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:41:09 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 17:11:10 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	Zombie	*zombies = new Zombie[N];

	while (N--) {

		zombies[N].set_name(name);
		zombies[N].announce();
	}

	return (zombies);
}
