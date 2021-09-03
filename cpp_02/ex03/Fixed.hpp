/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:09:32 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/03 13:37:56 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>

class	Fixed {

	int					_n;
	static const int	_pointBit;


	public:

		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &fixed);
		~Fixed(void);

		Fixed	&operator=(const Fixed &fixed);

		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		bool	operator<(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator>(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		static Fixed		&min(Fixed &fixed1, Fixed &fixed2);
		const static Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed		&max(Fixed &fixed1, Fixed &fixed2);
		const static Fixed	&max(const Fixed &fixed1, const Fixed &fixed);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(const int n);
};

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);

#endif
