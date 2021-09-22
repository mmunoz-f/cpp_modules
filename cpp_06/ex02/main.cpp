/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:17:50 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/22 19:01:09 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include "Base.hpp"

int	main(void) {

	srand(time(NULL));

	Base *base = generate();

	identify(base);
	identify(*base);

	return (0);
}
