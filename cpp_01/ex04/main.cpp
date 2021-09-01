/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:08:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 14:59:21 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::ifstream &ifs, std::ofstream &ofs, std::string str1, std::string str2) {

	std::streamsize size = ifs.gcount();
	char			src[size + 1];
	std::string		srcstring;
	//size_t			pos;
	//size_t			last_pos;

	src[size] = 0;
	ifs.read(src, size);
	srcstring = src;

	(void)str1;
	(void)str2;
	(void)ofs;

	std::cout << size << std::endl;

	//pos = 0;
	//last_pos = 0;
	//while ((pos = srcstring.find(str1, pos)) != srcstring.npos) {

	//	ofs << srcstring.substr(last_pos, pos) << str2;
	//	pos += str2.size();
	//}
}

int	main(int argc, char **argv) {

	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;

	if (argc < 4) {

		std::cout << "Error\nWrong number of arguments" << std::endl;
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

	::replace(ifs, ofs, argv[2], argv[3]);

	ifs.close();
	ofs.close();

	return (0);
}
