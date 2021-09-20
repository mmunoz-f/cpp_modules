/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:50:51 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 23:48:10 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Form.hpp"

Form::Form(void) : _name("Form"), _requiredGrade(150), _requiredExecGrade(0), _signed(false) {

	return ;
}

Form::Form(const std::string &name, const int requiredGrade, const int requiredExecGrade) : _name(name), _requiredGrade(requiredGrade), _requiredExecGrade(requiredExecGrade), _signed(false) {

	if (requiredGrade < 1 || requiredExecGrade < 1)
		throw GradeTooHighException();
	if (requiredGrade > 150 || requiredExecGrade > 150)
		throw GradeTooLowException();
	return ;
}

Form::Form(const Form &form) : _name(form.getName()), _requiredGrade(form.getRequiredGrade()), _requiredExecGrade(form.getRequiredExecGrade()),_signed(form.getSigned()) {

	return ;
}

Form::~Form(void) {

	return ;
}

Form	&Form::operator=(const Form &form) {

	this->_signed = form.getSigned();
	this->_target = form.getTarget();
	return (*this);
}

const std::string	&Form::getName(void) const {

	return (this->_name);
}

int	Form::getRequiredGrade(void) const {

	return (this->_requiredGrade);
}

int Form::getRequiredExecGrade(void) const {

	return (this->_requiredExecGrade);
}

bool	Form::getSigned(void) const {

	return (this->_signed);
}

const std::string	&Form::getTarget(void) const {

	return (this->_target);
}

void	Form::setTarget(const std::string &target) {

	this->_target = target;
}

void	Form::beSigned(const Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() > this->_requiredGrade)
		throw GradeTooLowException();
	this->_signed = true;
}

void	Form::validExec(const Bureaucrat &executor) const {

	if (!this->_signed)
		throw NotSignedException();
	if (executor.getGrade() > this->_requiredExecGrade)
		throw GradeTooLowException();
	std::cout << executor << " executes " << *this << std::endl;
}

const char	*Form::GradeTooHighException::what () const throw() {

	return ("grade too high");
}

const char	*Form::GradeTooLowException::what () const throw() {

	return ("grade too low");
}

const char *Form::NotSignedException::what () const throw() {

	return ("form not signed");
}

std::ostream	&operator<<(std::ostream &o, const Form &form) {

	o << "form " << form.getName() << ", required grade " << form.getRequiredGrade();
	return (o);
}
