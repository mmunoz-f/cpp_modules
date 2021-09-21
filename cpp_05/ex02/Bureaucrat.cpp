/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:57 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 12:24:15 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150) {

	return ;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : _name(name), _grade(grade) {

	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()) {

	return ;
}

Bureaucrat::~Bureaucrat(void) {

	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src) {

	this->_grade = src.getGrade();
	return (*this);
}

void	Bureaucrat::promote(const int n) {

	if (this->_grade - n > 150)
		throw GradeTooLowException();
	if (this->_grade - n < 1)
		throw GradeTooHighException();
	this->_grade -= n;
}

void	Bureaucrat::demote(const int n) {

	if (this->_grade + n > 150)
		throw GradeTooLowException();
	if (this->_grade + n < 1)
		throw GradeTooHighException();
	this->_grade += n;
}

void	Bureaucrat::signForm(Form &form) const {

	try {
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << *this << " cannot sign " << form << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form) const {

	try {

		form.execute(*this);
		std::cout << *this << " executes " << form << std::endl;
	}
	catch (std::exception &e) {

		std::cout << *this << " cannot execute " << form << " because " << e.what() << std::endl;
	}
}

const std::string	&Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

const char	*Bureaucrat::GradeTooHighException::what () const throw () {

	return ("grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what () const throw () {

	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat) {

	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (o);
}
