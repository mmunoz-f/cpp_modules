/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 19:08:12 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main (void) {

	Bureaucrat	javier("Javier", 20);
	Form		matricula("matriculacion", 30);
	Form		expulsion("expulsion", 10);

	javier.signForm(matricula);
	javier.signForm(expulsion);
	return (0);
}
