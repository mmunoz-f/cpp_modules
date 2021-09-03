/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:52:48 by miguel            #+#    #+#             */
/*   Updated: 2021/09/03 13:29:00 by miguel           ###   ########.fr       */
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


bool	valid_side(const Point p, const Point p1, const Point p2) {

	return ((p.getX() - p2.getX()) * (p1.getY() - p2.getY()) - (p1.getX() - p2.getX()) * (p.getY() - p2.getY()) > 0 ? true : false);
}

bool	bsp(const Point p1, const Point p2, const Point p3, const Point p0) {

	return (valid_side(p0, p1, p2) & valid_side (p0, p1, p3) & !valid_side(p0, p2, p3));
}
