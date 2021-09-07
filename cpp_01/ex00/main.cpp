/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:32:33 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/07 10:34:58 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	zombie;
	Zombie	juan("juan");
	Zombie	*heapzombie;
	Zombie	*manuel;
	Zombie	*sebastian;

	juan.announce();
	heapzombie = new Zombie();
	delete heapzombie;
	manuel = new Zombie("manuel");
	manuel->announce();
	randomChump("javier");
	sebastian = newZombie("sebastian");
	sebastian->announce();

	delete manuel;
	delete sebastian;

	return (0);
}
