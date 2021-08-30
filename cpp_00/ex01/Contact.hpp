/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:55:20 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/30 17:00:44 by mmunoz-f         ###   ########.fr       */
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
		Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _number, std::string _darkest_secret);
		~Contact(void);

		int				set_contact_data(void);
		void			get_contact_data(void) const;
		unsigned int	get_total(void) const;
		unsigned int	get_n(void) const;

		std::string		get_first_name(void) const;
		std::string		get_last_name(void) const;
		std::string		get_nickname(void) const;
		std::string		get_number(void) const;
		std::string		get_darkest_secret(void) const;

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_number;
		std::string	_darkest_secret;

		static unsigned int	_total;
		unsigned int	_n;

};

#endif
