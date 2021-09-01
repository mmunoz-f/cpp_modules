/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:36:55 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 19:02:11 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

Karen::Karen(void) {

	return ;
}

Karen::~Karen(void) {

	return ;
}

void	Karen::debug(void) const {

	std::cout << "[ DEBUG ]" <<std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void) const {

	std::cout << "[ INFO ]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) const {

	std::cout << "[ WARNING ]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) const {

	std::cout << "[ ERROR ]" <<std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) const {

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*functions[])() const = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	int i;
	for (i = 0; i < 4; i++) {
		if (level == levels[i]) {
			break ;
		}
	}

	switch (i) {
		case 0:
			(this->*functions[0])();
			std::cout << std::endl;

		case 1:
			(this->*functions[1])();
			std::cout << std::endl;\

		case 2:
			(this->*functions[2])();
			std::cout << std::endl;

		case 3:
			(this->*functions[3])();
			std::cout << std::endl;
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
	}
}
