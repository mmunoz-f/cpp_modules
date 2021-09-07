/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:14:08 by miguel            #+#    #+#             */
/*   Updated: 2021/09/06 11:19:27 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include <string>

class	ClapTrap {

	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attacktDamage;

	public:

		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &cp);

		virtual void	attack(const std::string &target) const;
		void	takeDamage(const unsigned int amount);
		void	beRepaired(const unsigned int amount);

		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;

		void	setName(std::string name);
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int enrgyPoints);
		void	setAttackDamage(int attackDamage);
};

#endif
