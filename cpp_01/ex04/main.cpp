/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:08:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 17:27:37 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	replace(std::ifstream &ifs, std::ofstream &ofs, std::string str1, std::string str2) {

	std::string		src;
	size_t			pos;
	size_t			last_pos;

	if (str2.empty() || str1.empty()) {
		std::cout << "Error\nNot valid argumnets" << std::endl;
		return (1);
	}

	while (!ifs.eof()) {

		pos = 0;
		last_pos = 0;
		std::getline(ifs, src);
		while ((pos = src.find(str1, last_pos)) != src.npos) {

			ofs << src.substr(last_pos, pos - last_pos) + str2;
			last_pos = pos + str1.size();
		}
		ofs << src.substr(last_pos);
		if (!ifs.eof())
			ofs << std::endl;
	}
	return (0);
}

int	main(int argc, char **argv) {

	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;

	if (argc < 4) {

		std::cout << "Error\nArguments" << std::endl;
		return (1);
	}

	file = argv[1];

	ifs.open(file);
	if (ifs.fail()) {

		std::cout << "Error\nOpen input file fail" << std::endl;
		return (2);
	}

	ofs.open(file + ".replace", std::ios::out);
	if (ofs.fail()) {

		std::cout << "Error\nOpen output file fail" << std::endl;
		return (2);
	}

	if (::replace(ifs, ofs, argv[2], argv[3]))
		return (3);

	ifs.close();
	ofs.close();

	return (0);
}
