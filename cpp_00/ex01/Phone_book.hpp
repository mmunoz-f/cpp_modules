/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/01 13:25:01 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONE_BOOK_H__
# define __PHONE_BOOK_H__

# include <string>
# include "Contact.hpp"

# define M_PHONE_BOOK_CAP 8

class	Phone_book {

	Contact	_contacts[M_PHONE_BOOK_CAP];

	public:

		Phone_book(void);
		~Phone_book(void);

		void	start_phone_book(void);

		void	add_command(void);
		void	search_command(void) const;
};

#endif
