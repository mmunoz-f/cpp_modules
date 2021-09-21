/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:38 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 11:35:19 by mmunoz-f         ###   ########.fr       */
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

	class GradeTooHighException : public std::exception {

		const char * what() const throw ();
	};

	class GradeTooLowException : public std::exception {

		const char * what() const throw ();
	};

	public:

		Form(void);
		Form(const std::string &name, const int requiredGrade);
		Form(const Form &form);
		~Form(void);

		Form	&operator=(const Form &form);

		const std::string	&getName(void) const;
		int					getRequiredGrade(void) const;
		int					getRequiredExecGrade(void) const;
		bool				getSigned(void) const;

		void	beSigned(const Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &o, const Form &form);

#endif
