/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 13:00:16 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main (void) {

	srand(time(NULL));

	Bureaucrat				javier("Javier", 20);
	Bureaucrat				manuel("Manuel", 150);
	ShrubberyCreationForm	shrubbery("home");
	RobotomyRequestForm		robotomy("Puppy");
	PresidentialPardonForm	president("Un michi");

	javier.executeForm(shrubbery);
	javier.signForm(shrubbery);
	manuel.executeForm(shrubbery);
	javier.executeForm(shrubbery);

	javier.signForm(robotomy);
	javier.executeForm(robotomy);

	javier.signForm(president);
	javier.executeForm(president);
	javier.promote(19);
	javier.executeForm(president);

	return (0);
}
