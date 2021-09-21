/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:29:48 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 20:42:02 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

void	scalarConversor(const std::string &original) {

	Conversion conv(original);
}

int	main(int argc, char **argv) {

	if (argc < 2) {
		std::cout << "Error\nArguments" << std::endl;
		return (1);
	}

	for (int i = 0; i < argc; i++) {
		scalarConversor(argv[i + 1]);
	}
	return (0);
}
