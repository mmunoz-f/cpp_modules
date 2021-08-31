/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:03:06 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 19:47:34 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {

	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPtr = &string;
	std::string	&stringRef = string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringPtr: " << stringPtr << std::endl;
	std::cout << "stringRef address: " << &stringRef << std::endl;

	std::cout << "string referenced by strongPtr: " << *stringPtr << std::endl;
	std::cout << "string referenced by stringRef: " << stringRef << std::endl;

	return (0);
}
