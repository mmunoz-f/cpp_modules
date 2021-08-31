/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:33:17 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/31 16:48:20 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

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
