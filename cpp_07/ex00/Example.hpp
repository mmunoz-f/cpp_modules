/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:29:28 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/23 23:37:40 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EXAMPLE_H__
# define __EXAMPLE_H__

# include <ostream>

class Example {

	public:

		int	n;

		Example(void);
		Example(const int n);
		Example(const Example &src);
		~Example(void);

		Example	&operator=(const Example &src);
		bool	operator<(const Example &a) const;
		bool	operator>(const Example &a) const;
};

std::ostream	&operator<<(std::ostream &o, const Example &src);

#endif
