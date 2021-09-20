/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:45:57 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 13:49:09 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

	if (this->_grade - n > 150) {

		throw GradeTooLowException();
		return ;
	}
	if (this->_grade - n < 1) {

		throw GradeTooHighException();
		return ;
	}
	this->_grade -= n;
}

void	Bureaucrat::demote(const int n) {

	if (this->_grade + n > 150) {

		throw GradeTooLowException();
		return ;
	}
	if (this->_grade + n < 1) {

		throw GradeTooHighException();
		return ;
	}
	this->_grade += n;
}

const std::string	&Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

const  char *Bureaucrat::GradeTooHighException::what () const throw () {

	return ("Grade too high");
}

const  char *Bureaucrat::GradeTooLowException::what () const throw () {

	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat) {

	o << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return (o);
}
