/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:45:36 by miguel            #+#    #+#             */
/*   Updated: 2021/09/03 13:06:52 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
# define __POINT_H__

# include "Fixed.hpp"

class	Point {

	Fixed	_x;
	Fixed	_y;

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point &p);
		~Point(void);

		Point	&operator=(const Point &p);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp(const Point p1, const Point p2, const Point p3, const Point p0);

#endif
