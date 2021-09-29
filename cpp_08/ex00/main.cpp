/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 08:54:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/29 16:06:54 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
#include "easyfind.hpp"

int	main(void) {

	std::list<int>					lst;
	std::vector<int>				v;

	for (int i = 0; i < 10; i++) {
		lst.push_back(i);
		v.push_back(i);
	}
	std::cout << (easyfind(lst, 3) ? "true" : "false") << std::endl;
	std::cout << (easyfind(v, 11) ? "true" : "false") << std::endl;
	return (0);
}
