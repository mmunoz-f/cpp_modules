/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:23:42 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/26 22:38:03 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
# define __SPAN_H__

#include <vector>

class Span {

	const unsigned int	_size;
	std::vector<int>	_values;

	Span(void);

	public:

		class AlreadyFilledException : public std::exception {
			const char * what () const throw ();
		};

		class CouldNotFindSpan : public std::exception {
			const char * what () const throw ();
		};

		Span(const unsigned int N);
		Span(const Span &src);
		~Span(void);

		Span		&operator=(const Span &src);
		const int	&operator[](const unsigned int n) const;

		int						getSize(void) const;
		const std::vector<int>	&getVector(void) const;

		void	addNumber(const int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		min(void) const;
		int		max(void) const;
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
};

#endif
