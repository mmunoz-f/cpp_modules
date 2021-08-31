/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:56:12 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 21:00:42 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class	HumanB {

	std::string	_name;
	Weapon		*_weapon;

	public:

		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon &weapon);

		void	attack(void) const;
};

#endif
