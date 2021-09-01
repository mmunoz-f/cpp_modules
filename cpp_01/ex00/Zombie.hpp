/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:33:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 13:19:29 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>

class	Zombie {

	const std::string	_name;

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const ;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
