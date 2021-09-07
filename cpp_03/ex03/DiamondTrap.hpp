/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:48:13 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 12:50:11 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

	std::string	_name;

	using	FragTrap::_hitPoints;
	using	ScavTrap::_energyPoints;
	using	FragTrap::_attacktDamage;

	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &dt);
		~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &dt);

		using	ScavTrap::attack;

		void	whoAmI(void) const;
};

#endif
