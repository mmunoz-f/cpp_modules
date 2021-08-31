/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:55:00 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 20:36:42 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class	HumanA {

	std::string	_name;
	Weapon		&_weapon;

	public:

		HumanA(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void) const;
};

#endif
