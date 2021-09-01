/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 16:04:28 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <string>
# include "Contact.hpp"

# define M_PHONEBOOK_CAP 8

class	Phonebook {

	Contact	_contacts[M_PHONEBOOK_CAP];

	public:

		Phonebook(void);
		~Phonebook(void);

		void	start_phone_book(void);

		void	add_command(void);
		void	search_command(void) const;
};

#endif
