/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:09:33 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 12:37:07 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

	public:

		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &st);
		~FragTrap(void);

		FragTrap	&operator=(const FragTrap &st);

		void	attack(const std::string &target) const;
		void	highFiveGuys(void) const;
};

#endif
