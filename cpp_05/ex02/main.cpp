/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 00:03:22 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main (void) {

	Bureaucrat				javier("Javier", 20);
	Bureaucrat				manuel("Manuel", 150);
	ShrubberyCreationForm	shrubbery("home");
	RobotomyRequestForm		robotomy("Puppy");

	javier.executeForm(shrubbery);
	javier.signForm(shrubbery);
	manuel.executeForm(shrubbery);
	javier.executeForm(shrubbery);

	javier.signForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);
	javier.executeForm(robotomy);

	return (0);
}
