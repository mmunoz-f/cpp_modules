/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:38 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 22:58:34 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
# define __FORM_H__

# include <string>
# include <exception>
# include <ostream>
# include "Bureaucrat.hpp"

class Form {

	const std::string	_name;
	const int			_requiredGrade;
	const int			_requiredExecGrade;
	bool				_signed;
	std::string			_target;


	class GradeTooHighException : public std::exception {

		const char * what() const throw ();
	};

	class GradeTooLowException : public std::exception {

		const char * what() const throw ();
	};

	class NotSignedException : public std::exception {

		const char * what() const throw ();
	};

	public:

		Form(void);
		Form(const std::string &name, const int requiredGrade, const int requiredExecGrade);
		Form(const Form &form);
		~Form(void);

		Form	&operator=(const Form &form);

		const std::string	&getName(void) const;
		int					getRequiredGrade(void) const;
		int					getRequiredExecGrade(void) const;
		bool				getSigned(void) const;
		const std::string	&getTarget(void) const;
		void				setTarget(const std::string &target);

		void			beSigned(const Bureaucrat &bureaucrat);
		void			validExec(const Bureaucrat &executor) const;
		virtual void	execute(const Bureaucrat &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &o, const Form &form);

#endif
