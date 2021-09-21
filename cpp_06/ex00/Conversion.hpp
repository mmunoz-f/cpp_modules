/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:11:30 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 21:30:31 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERSION_H__
# define __CONVERSION_H__

# include <iostream>
# include <string>

class	Conversion {

	public:

		std::string	exceptions[4];
		char	c;
		int		i;
		float	f;
		double	d;

		Conversion(void);
		Conversion(const std::string &original);
		Conversion(const Conversion &src);
		~Conversion(void);

		Conversion	&operator=(const Conversion &src);
};

std::ostream	&operator<<(std::ostream &o, const Conversion &src);

#endif
