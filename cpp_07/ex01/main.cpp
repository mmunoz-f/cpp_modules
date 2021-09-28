/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:59:10 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/28 16:38:15 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include "Example.hpp"
#include "show.hpp"

int	main(void) {

	char	str[] = "hola";
	int		numbers[] = {1, 2, 3};
	Example	examples[] = {Example(1), Example(2), Example(3)};

	iter(str, strlen(str), show);
	std::cout << std::endl;
	iter(numbers, 3, show);
	std::cout << std::endl;
	iter(examples, 3, show);
	std::cout << std::endl;
	return (0);
}
