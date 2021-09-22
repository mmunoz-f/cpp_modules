/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:29:48 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 16:47:11 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

void	scalarConversor(const std::string &original) {

	try {
		Conversion conv(original);
		std::cout << conv;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int	main(int argc, char **argv) {

	if (argc < 2) {
		std::cout << "Error\nArguments" << std::endl;
		return (1);
	}

	for (int i = 1; i < argc; i++) {
		scalarConversor(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
