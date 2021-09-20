/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 14:04:16 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main (void) {

	Bureaucrat javier("Javier", 20);

	std::cout << javier << std::endl;
	try {

		javier.promote(19);
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	std::cout << javier << std::endl;

	try {

		javier.promote(10);
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	std::cout << javier << std::endl;

	try {

		javier.demote(200);
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	std::cout << javier << std::endl;

	try {

		Bureaucrat manuel("Manuel", 300);
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	return (0);
}
