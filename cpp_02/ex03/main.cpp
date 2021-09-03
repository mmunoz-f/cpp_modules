/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:07:06 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/03 16:00:53 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void) {

	Point	p1(0, 0);
	Point	p2(5, 0);
	Point	p3(0, 5);
	Point	p(0,0);

	std::cout << bsp(p1, p2, p3, p) << std::endl;

	p = Point(2, 0);
	std::cout << bsp(p1, p2, p3, p) << std::endl;

	p = Point(1, 1);
	std::cout << bsp(p1, p2, p3, p) << std::endl;

	p = Point(1, -1);
	std::cout << bsp(p1, p2, p3, p) << std::endl;

	p = Point(-1, 1);
	std::cout << bsp(p1, p2, p3, p) << std::endl;

	p = Point(5, 3);
	std::cout << bsp(p1, p2, p3, p) << std::endl;

	return 0;
}
