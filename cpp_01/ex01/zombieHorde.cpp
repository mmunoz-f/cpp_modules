/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:41:09 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/07 10:37:22 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	Zombie	*zombies = new Zombie[N];

	while (N--)
		zombies[N].set_name(name);

	return (zombies);
}
