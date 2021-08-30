/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/30 21:53:35 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

# include <iostream>
# include <string>
# include "Contact.hpp"

# define M_PHONE_BOOK_CAP 2

class	Phone_book {

	public:

		Phone_book(void);
		~Phone_book(void);

		void	exec_command(char str[1024]);
		void	start_phone_book(void);

		void	add_command(void);
		void	search_command(void) const;

	private:

		const unsigned int	_cap;
		Contact	_contacts[M_PHONE_BOOK_CAP];
};

#endif
