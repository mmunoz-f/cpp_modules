/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:46:13 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 23:06:17 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__

# include <string>
# include <exception>
# include <ostream>

class	Form;

class Bureaucrat {

	const std::string	_name;
	int					_grade;

	class GradeTooHighException : public std::exception {

		const char * what () const throw ();
	};

	class GradeTooLowException : public std::exception {

		const char * what () const throw ();
	};

	public:

		Bureaucrat(void);
		Bureaucrat(const std::string &name, const int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &src);

		const std::string	&getName(void) const;
		int					getGrade(void) const;

		void	promote(const int n);
		void	demote(const int n);
		void	signForm(Form &form) const;
		void	executeForm(const Form &form) const;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
