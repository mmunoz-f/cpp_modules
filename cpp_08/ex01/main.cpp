/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:32:56 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/27 16:33:51 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include "Span.hpp"

int	main(void) {

	srand(time(NULL));

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try { sp.addNumber(6); }
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span	span(10000);
	std::vector<int>	v;
	for (unsigned int i = 0; i < 10000; i++)
		v.push_back(rand());

	span.addNumber(v.begin(), v.end());

	std::cout << "max: " << span.max() << ", min: " << span.min() << std::endl;
	std::cout << "longest span: " << span.longestSpan() << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;

	return (0);
}
