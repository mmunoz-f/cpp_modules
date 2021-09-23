/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:20:12 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/23 23:41:10 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
#include "Example.hpp"

int	main(void) {

	int		a = 1;
	int		b = 2;
	float	c = 1.2;
	float	d = 2.3;


	std::cout << max<int>(a, b) << std::endl;
	std::cout << min<int>(a, b) << std::endl;
	std::cout << max<float>(c, d) << std::endl;
	std::cout << min<float>(c, d) << std::endl;

	swap<int>(a, b);
	swap<float>(c, d);
	std::cout << a << " " << b << " " << c << " " << d << std::endl;

	Example	e(1);
	Example	f(2);

	std::cout << max<Example>(e, f) << std::endl;
	std::cout << min<Example>(e, f) << std::endl;

	swap<Example>(e, f);
	std::cout << e << " " << f <<std::endl;
}
