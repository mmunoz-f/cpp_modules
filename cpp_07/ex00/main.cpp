/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:20:12 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/23 23:53:07 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"
#include "Example.hpp"

int	main(void) {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	float	e = 1.2;
	float	f = 2.3;
	::swap<float>(e, f);
	std::cout << ::max<float>(e, f) << std::endl;
	std::cout << ::min<float>(e, f) << std::endl;
	std::cout << c << " " << d << std::endl;

	Example	g(1);
	Example	h(2);
	::swap<Example>(g, h);
	std::cout << ::max<Example>(g, h) << std::endl;
	std::cout << ::min<Example>(g, h) << std::endl;
	std::cout << e << " " << f <<std::endl;
}

