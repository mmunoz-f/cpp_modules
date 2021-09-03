/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:52:48 by miguel            #+#    #+#             */
/*   Updated: 2021/09/03 16:02:27 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(), _y() {

	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {

	return ;
}

Point::Point(const Point &p) {

	this->_x = p.getX();
	this->_y = p.getY();
	return ;
}

Point::~Point(void) {

	return ;
}

Point	&Point::operator=(const Point &p) {

	this->_x = p.getX();
	this->_y = p.getY();
	return (*this);
}

Fixed	Point::getX(void) const {

	return (this->_x);
}

Fixed	Point::getY(void) const {

	return (this->_y);
}

bool	bsp(const Point p1, const Point p2, const Point p3, const Point p) {

	Fixed	p1f[2] = {p1.getX(), p1.getY()};
	Fixed	p2f[2] = {p2.getX(), p2.getY()};
	Fixed	p3f[2] = {p3.getX(), p3.getY()};
	Fixed	pf[2] = {p.getX(), p.getY()};

	float	area = 0.5 * (-(p2f[1]) * p3f[0] + p1f[1] *(-(p2f[0]) + p3f[0]) + p1f[0] *(p2f[1] - p3f[1]) + p2f[0] * p3f[1]).toFloat();

	float	s = 1 / (2 * area) * (p1f[1] * p3f[0] - p1f[0] * p3f[1] + (p3f[1] - p1f[1]) * pf[0] + (p1f[0] - p3f[0]) * pf[1]).toFloat();
	float	t = 1 / (2 * area) * (p1f[0] * p2f[1] - p1f[1] * p2f[0] + (p1f[1] - p2f[1]) * pf[0] + (p2f[0] - p1f[0]) * pf[1]).toFloat();

	if ((s > 0 && t > 0 && s + t < 1))
		return (true);
	return (false);
}
