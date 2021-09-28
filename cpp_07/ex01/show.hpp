/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 05:04:22 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/28 16:36:46 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ADD_H__
# define __ADD_H__

# include <iostream>

template<typename T>
void	show(const T &o) {
	std::cout << o << ", ";
}

#endif