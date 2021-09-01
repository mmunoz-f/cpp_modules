/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:37:46 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 18:26:54 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
# define __KAREN_H__

# include <string>

class	Karen {

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

	public:

		Karen(void);
		~Karen(void);

		void	complain(std::string level) const;
};

#endif
