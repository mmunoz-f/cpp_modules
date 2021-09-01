/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:33:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 13:19:46 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>

class	Zombie {

	std::string	_name;

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const ;

		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
