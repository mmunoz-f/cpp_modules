/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:27:24 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 18:02:20 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {

	return ;
}

Intern::Intern(const Intern &intern) {

	(void)intern;
	return ;
}

Intern::~Intern(void) {

	return ;
}

Intern	&Intern::operator=(const Intern &intern) {

	(void)intern;
	return (*this);
}

Form	*Intern::makeForm(const std::string &formName, const std::string &formTarget) const {

	Form	*form = NULL;

	const std::string	concreteForms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form				*(*newForms[])(const std::string &) = {&newShrubberyCreation, &newRobotomyRequest, &newPresidentialPardon};

	for (int i = 0; i < M_CONCRETE_FORMS; i++) {
		if (formName == concreteForms[i])
			form = (newForms[i])(formTarget);
	}

	if (form)
		std::cout << "Intern creates " << *form <<std::endl;
	else
		std::cout << "Intern could not create " << formName << " form" << std::endl;
	return (form);
}
