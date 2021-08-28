/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:55:20 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/28 18:16:35 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

# define M_MAX_PHONE_NUMBER 999999999
# define M_MIN_PHONE_NUMBER 100000000

class	Contact {

	public:

		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, int number, std::string darkest_secret);
		~Contact(void);

		int				set_contact_data(void);
		unsigned int	get_total(void) const;
		unsigned int	get_n(void) const;

	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			number;
		std::string	darkest_secret;

		static unsigned int	_total;
		unsigned int	_n;

};

#endif
