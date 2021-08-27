/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:55:20 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/27 00:50:06 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class	Contact {

	public:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			number;
		std::string	darkest_secret;

		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, int number, std::string darkest_secret);
		~Contact(void);

		unsigned int	get_total(void) const;
		unsigned int	get_n(void) const;

	private:

		static unsigned int	_total;
		unsigned int	_n;

};

#endif
