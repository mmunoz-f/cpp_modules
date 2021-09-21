/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:50:51 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 12:14:04 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(void) : _name("Form"), _requiredGrade(150), _requiredExecGrade(150), _signed(false) {

	return ;
}

Form::Form(const std::string &name, const int requiredGrade) : _name(name), _requiredGrade(requiredGrade), _requiredExecGrade(150), _signed(false) {

	if (requiredGrade < 1)
		throw GradeTooHighException();
	if (requiredGrade > 150)
		throw GradeTooLowException();
	return ;
}

Form::Form(const Form &form) : _name(form.getName()), _requiredGrade(form.getRequiredGrade()), _requiredExecGrade(form.getRequiredExecGrade()), _signed(form.getSigned()) {

	return ;
}

Form::~Form(void) {

	return ;
}

Form	&Form::operator=(const Form &form) {

	this->_signed = form.getSigned();
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

void	Form::beSigned(const Bureaucrat &bureaucrat) {

	if (bureaucrat.getGrade() > this->_requiredGrade)
		throw GradeTooLowException();
	this->_signed = true;
}

const char	*Form::GradeTooHighException::what () const throw() {

	return ("grade too high");
}

const char	*Form::GradeTooLowException::what () const throw() {

	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &o, const Form &form) {

	o << "form " << form.getName() << ", required grade " << form.getRequiredGrade();
	return (o);
}
