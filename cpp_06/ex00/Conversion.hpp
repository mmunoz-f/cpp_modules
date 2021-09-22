/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:11:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 16:43:14 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERSION_H__
# define __CONVERSION_H__

# include <iostream>
# include <string>

class	Conversion {

	class NotLiteralException : public std::exception {

		const char * what() const throw();
	};

	public:

		std::string	exceptions[4];
		char		c;
		int			i;
		float		f;
		double		d;

		Conversion(void);
		Conversion(const std::string &original);
		Conversion(const Conversion &src);
		~Conversion(void);

		Conversion	&operator=(const Conversion &src);

		void	charConv(const std::string &str);
		void	intConv(const std::string &str);
		void	floatConv(const std::string &str);
		void	doubleConv(const std::string &str);
		bool	handleException(const std::string &str);
};

std::ostream	&operator<<(std::ostream &o, const Conversion &src);

// Parsing functions to verify is a literal C value

bool	strIsInt(const std::string &str);
bool	strIsFloat(const std::string &str);
bool	strIsDouble(const std::string &str);

#endif
