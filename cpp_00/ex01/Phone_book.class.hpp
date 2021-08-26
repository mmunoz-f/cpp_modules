/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/26 11:27:34 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

# include <iostream>
# include <string>

class	Phone_book{

	const unsigned int	cap;

	public:

		Phone_book(const unsigned int cap);
		~Phone_book(void);

		void	exec_command(std::string);

	private:

		void	add_command();
		void	search_command();
		void	exit_command();
};

#endif
