/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:09:32 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 19:25:27 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

class	Fixed {

	int					_n;
	static const int	_bit;

	public:

		Fixed(void);
		Fixed(int n);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
