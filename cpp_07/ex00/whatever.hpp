/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:12:21 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/23 23:42:48 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
# define __WHATEVER_H__

template<typename T>
void	swap(T &a, T &b) {

	T	c = a;

	a = b;
	b = c;
}

template<typename T>
const T	&min(const T &a, const T &b) {

	return (a < b ? a : b);
}

template<typename T>
const T	&max(const T &a, const T &b) {

	return (a > b ? a : b);
}

#endif
