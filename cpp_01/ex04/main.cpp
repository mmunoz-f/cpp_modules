/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:08:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 22:04:30 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::fstream ifs, std::fstream ofs, std::string str1, std::string str2) {

	char	src[ifs.gcount()];

	ifs.read(src, ifs.gcount());
}

int	main(int argc, char **argv) {

	std::fstream	ifs;
	std::fstream	ofs;
	std::string		file;

	if (argc < 4) {

		std::cout << "Error\nWrong number of arguments" << std::endl;
		return (1);
	}

	file = argv[1];

	ifs.open(file);
	if (ifs.failbit) {

		std::cout << "Error\nOpen input file fail" << std::endl;
		return (2);
	}

	ofs.open(file + ".replace");
	if (ofs.failbit) {

		std::cout << "Error\nOpen output file fail" << std::endl;
		return (2);
	}

	::replace(ifs, ofs, argv[2], argv[3]);

	ifs.close();
	ofs.close();

	return (0);
}
