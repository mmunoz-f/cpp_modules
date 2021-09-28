/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:59:32 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/28 16:35:50 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
# define __ITER_H__

# include <iostream>

template<typename T>
void	iter(T ptr[], size_t length, void (*f)(const T&)) {

	for (size_t i = 0; i < length; i++)
		f(ptr[i]);
}

#endif
