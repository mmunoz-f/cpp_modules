/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:52:38 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 12:34:31 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*str_capitalize(char *str){

	unsigned int i;

	i = 0;
	while (str[i]){
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv){

	int	i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	i = 1;
	while (i < argc){
		std::cout << str_capitalize(argv[i++]);
		if (i != argc)
			std::cout << ' ';
	}

	std::cout << std::endl;

	return (0);
}
