/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:50:08 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 19:23:06 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Base.hpp"

Base	*generate(void) {

	int	n = rand() % 3;

	switch (n)
	{
		case 0:
			std::cout << "A generated" <<std::endl;
			return (new A);
		case 1:
			std::cout << "B generated" <<std::endl;
			return (new B);
		case 2:
			std::cout << "C generated" <<std::endl;
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p) {

	if (dynamic_cast<A *>(p))
		std::cout << "Originally A" << std::endl;
	else
		std::cout << "Not A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "Originally B" << std::endl;
	else
		std::cout << "Not B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "Originally C" << std::endl;
	else
		std::cout << "Not C" << std::endl;
}

void	identify(Base &p) {

	Base	b;

	try {
		b = dynamic_cast<A &>(p);
		std::cout << "Originally A" << std::endl;
	}
	catch (std::bad_cast e) {
		std::cout << "Not A" << std::endl;
	}

	try {
		b = dynamic_cast<B &>(p);
		std::cout << "Originally B" << std::endl;
	}
	catch (std::bad_cast e) {
		std::cout << "Not B" << std::endl;
	}

	try {
		b = dynamic_cast<C &>(p);
		std::cout << "Originally C" << std::endl;
	}
	catch (std::bad_cast e) {
		std::cout << "Not C" << std::endl;
	}
}
