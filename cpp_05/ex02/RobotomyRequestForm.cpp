/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:25:34 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 11:26:29 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45) {

	this->setTarget("garden");
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45) {

	this->setTarget(target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getName(), src.getRequiredGrade(), src.getRequiredExecGrade()) {

	this->setTarget(src.getTarget());
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {

	this->setTarget(src.getTarget());
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	this->validExec(executor);

	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " robotization failed" <<std::endl;
}
