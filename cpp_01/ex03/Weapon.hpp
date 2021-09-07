/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:54:51 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/07 11:28:22 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <string>

class	Weapon {

	std::string	_type;

	public:

		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		const std::string	&getType(void) const;
		void				setType(std::string type);
};

#endif
