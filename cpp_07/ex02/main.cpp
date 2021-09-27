/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 06:17:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/27 20:59:31 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Example.hpp"

int	main(void) {

	Array<int>	a;
	Array<int>	b(3);

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	b[0] = 0;
	b[1] = 1;
	b[2] = 2;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	try {
		b[4] = 4;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}

	Array<Example> c(3);
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	c[0] = 3;
	c[1] = 4;
	c[2] = 5;
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	const Array<int> d(3);

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

	return (0);
}
