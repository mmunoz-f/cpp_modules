/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:59:10 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/24 05:21:05 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Example.hpp"
#include "add.hpp"

int	main(void) {

	char	str[] = "hola";
	int		numbers[] = {1, 2, 3};
	Example	examples[] = {Example(1), Example(2), Example(3)};

	iter(str, strlen(str), add);
	iter(numbers, 3, add);
	iter(examples, 3, add);

	std::cout << str << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << examples[i] << " ";
	std::cout << std::endl;
	return (0);
}
