/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:54:09 by miguel            #+#    #+#             */
/*   Updated: 2021/09/04 17:10:41 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:

		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &st);
		~ScavTrap(void);

		ScavTrap	&operator=(const ScavTrap &st);

		void	attack(const std::string &target) const;
		void	guardGate(void) const;
};

#endif
