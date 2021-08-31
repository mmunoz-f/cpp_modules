/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:32:33 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 16:26:12 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	zombie;
	Zombie	juan("juan");
	Zombie	*heapzombie;
	Zombie	*manuel;
	Zombie	*sebastian;

	heapzombie = new Zombie();
	manuel = new Zombie("manuel");
	sebastian = newZombie("sebastian");
	randomChump("javier");

	delete heapzombie;
	delete manuel;
	delete sebastian;

	return (0);
}
