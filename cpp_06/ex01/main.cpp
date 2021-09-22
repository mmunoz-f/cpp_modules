/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:26:15 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 17:41:21 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serialization.hpp"

int	main(void) {

	Data	data;

	data.n = 42;

	uintptr_t p = serialize(&data);
	Data	*newdata = deserialize(p);

	std::cout << "data address: " << &data << std::endl;
	std::cout << "newdata value:" << newdata << std::endl;
	std::cout << "data attribute value:" << data.n <<std::endl;
	std::cout << "Value by accessing through newdata:" << newdata->n << std::endl;
}
