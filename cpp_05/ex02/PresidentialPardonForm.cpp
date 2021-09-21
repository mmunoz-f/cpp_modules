/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:17:02 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 12:57:55 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) {

	this->setTarget("garden");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5) {

	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getName(), src.getRequiredGrade(), src.getRequiredExecGrade()) {

	this->setTarget(src.getTarget());
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {

	this->setTarget(src.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	this->validExec(executor);

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
