/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:27:45 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 17:33:28 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZATION_H__
# define __SERIALIZATION_H__

# include <stdint.h>

typedef struct Data {

	int	n;
}	Data;

uintptr_t	serialize(Data* ptr);

Data*	deserialize(uintptr_t raw);

#endif
