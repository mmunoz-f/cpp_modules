/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:51:27 by miguel            #+#    #+#             */
/*   Updated: 2021/09/13 12:08:17 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include <string>
# include "Animal.hpp"

class	Cat : public Animal {

	Brain	*_brain;

	public:

		Cat(void);
		Cat(const Cat &animal);
		~Cat(void);

		Cat	&operator=(const Cat &animal);

		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

#endif
