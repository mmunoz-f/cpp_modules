/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 16:34:28 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main (void) {

	Bureaucrat javier("Javier", 1);
	Intern	juan;
	Form	*form;

	form = juan.makeForm("presidential pardon", "El jefazo");

	javier.signForm(*form);
	javier.executeForm(*form);

	delete form;

	return (0);
}
