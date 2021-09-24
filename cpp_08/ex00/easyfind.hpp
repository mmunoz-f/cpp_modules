/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 08:32:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/24 08:53:33 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
# define __EASYFIND_H__

# include <algorithm>
# include <iterator>

template<typename T>
bool	easyfind(const T &container, const int n) {
	std::T<int>::iterator	it = std::find(container.begin(), container.last(), n);
	if (it == container.end())
		return (false);
	return (true);
}

#endif
