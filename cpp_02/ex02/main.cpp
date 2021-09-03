/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:07:06 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/03 12:43:01 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "Addition " << a + b << std::endl;
	std::cout <<  "Substraction " << a - b << std::endl;
	std::cout << "Multiplication " << a * b << std::endl;
	std::cout << "Divison " << a / b << std::endl;

	std::cout << "Equal " << (a == b ? "True" : "False") << std::endl;
	std::cout << "Not equal " << (a != b ? "True" : "False") << std::endl;
	std::cout << "a less tha b " << (a < b ? "True" : "False") << std::endl;
	std::cout << "a less/equal than b " << (a <= b ? "True" : "False") << std::endl;
	std::cout << "a greater than b " << (a > b ? "True" : "False") << std::endl;
	std::cout << "a greater/equal than b " << (a >= b ? "True" : "False") << std::endl;

	return 0;
}
