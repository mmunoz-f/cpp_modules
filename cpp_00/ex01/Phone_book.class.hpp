/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/26 20:26:34 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

# include <iostream>
# include <string>
# include "Contact.class.hpp"

class	Phone_book{

	public:

		Phone_book(const unsigned int cap);
		~Phone_book(void);

		void	exec_command(std::string);
		void	start_phone_book();

		void	add_command();
		void	search_command() const;

	private:

		const unsigned int	_cap;
		const Contact	*_contacts;

};

#endif
