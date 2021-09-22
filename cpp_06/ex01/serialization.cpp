/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:27:09 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 17:35:18 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data *ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}
